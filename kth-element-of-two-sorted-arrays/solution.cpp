int solution1(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    if(m < n) return solution1(row2, row1, n, m, k);
    int l = max(0, k-n), r = min(k, m);
    while(l<=r) {
        int cut1 = (l+r) >> 1;
        int cut2 = k-cut1;
        int l1 = cut1 == 0 ? INT32_MIN : row1[cut1-1];
        int l2 = cut2 == 0 ? INT32_MIN : row2[cut2-1];
        int r1 = cut1 == m ? INT32_MAX : row1[cut1];
        int r2 = cut2 == n ? INT32_MAX : row2[cut2];
        if(l1<=r2 && l2 <= r1) {
            return max(l1, l2);
        }
        else if(l1 > r2) {
            r = cut1 - 1;
        } else l = cut1 + 1;
    }
    return -1;
}

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    return solution1(row1, row2, m, n, k);
}
