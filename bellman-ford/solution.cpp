vector<int> solution1(int n, int m, int src, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int> ans(n+1, 1e8);
    ans[src] = 0;
    for(int i{1};i<n;++i) {
        for(int j{0};j<m;++j) {
            ans[edges[j][1]] = min(ans[edges[j][1]], ans[edges[j][0]] + edges[j][2]);
        }
    }
    // return move(ans);
    return move(ans);
}
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    // Write your code here.
    return solution1(n, m, src, edges);
}
