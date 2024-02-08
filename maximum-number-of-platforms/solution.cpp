int solution1(int at[], int dt[], int n) {
    // Write your code here.
    int arr[2401] = {0};
    for(int i{0};i<n;++i) {
        ++arr[at[i]], --arr[dt[i]+1];
    }
    int ans{0};
    for (int i{1}; i < 2400; ++i) {
        arr[i] += arr[i - 1];
        ans = max(ans, arr[i]);
    }
    return ans;
}

int solution2(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    int ans{0}, i{0}, j{0};
    while(i<n) {
        while(i<n && at[i] <= dt[j]) ++i;
        ans = max(ans, i-j);
        ++j;
    }
    return ans;
}

int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    // return solution1(at, dt, n);
    return solution2(at, dt, n);
}
