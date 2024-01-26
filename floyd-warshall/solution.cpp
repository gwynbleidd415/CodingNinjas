int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    if(src == dest) return 0;
    vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
    for(int i{0};i<m;++i) dist[edges[i][0]][edges[i][1]] = edges[i][2];
    for(int i{1};i<=n;++i) {
        for(int j{1};j<=n;++j) {
            if(j == i || dist[j][i] == 1e9) continue;
            for(int k{1};k<=n;++k) {
                if(k==i || k==j || dist[i][k] == 1e9) continue;
                dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
            }
        }
    }
    return dist[src][dest];
}
