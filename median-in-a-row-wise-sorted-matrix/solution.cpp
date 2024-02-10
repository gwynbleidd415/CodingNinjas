int solution1(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    vector<int> arr(n*m);
    int k = 0;
    for(int i{0};i<m;++i) {
        for(int j{0};j<n;++j) {
            arr[k++] = matrix[i][j];
        }
    }
    sort(arr.begin(), arr.end());
    return arr[k>>1];
}
int solution2(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    vector<int> trav(m);
    int k = 0;
    int target = (m*n)>>1;
    while(true) {
        int minn;
        for(int i{0};i<m;++i) if(trav[i] < n) minn = i;
        for(int i{0};i<m;++i) {
            if(trav[i] < n && matrix[i][trav[i]] < matrix[minn][trav[minn]]) minn = i;
        }
        if(k == target) return matrix[minn][trav[minn]];
        ++trav[minn], ++k;
    }
    return 0;
}
int getCountLessEq(vector<int> &arr, int target) {
    int l{0}, r = arr.size(), m;
    while(l<r) {
        m = (l+r)>>1;
        if(arr[m]>target) r = m;
        else l = m+1;
    }
    return l;
}
int solution3(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    int minn{matrix.front().front()}, maxx{matrix.front().back()};
    for(int i{1};i<m;++i) {
        if(matrix[i].front() < minn) minn = matrix[i].front();
        if(matrix[i].back() > maxx) maxx = matrix[i].back();
    }
    int mid, lessCnt;
    int target{(n*m+1)>>1};
    while(minn < maxx) {
        mid = (minn + maxx) >> 1;
        lessCnt = 0;
        for(int i{0};i<m;++i) {
            lessCnt += getCountLessEq(matrix[i], mid);
        }
        if(lessCnt < target) minn = mid + 1;
        else maxx = mid;
    }
    return minn;
}

int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    // return solution1(matrix, m, n);
    // return solution2(matrix, m, n);
    return solution3(matrix, m, n);
}
