vector<int> dijkstra(vector<vector<int>> &edge, int vertices, int edges, int source)
{
    // Write your code here.
    // 'edge' contains {u, v, distance} vectors.
    vector<vector<pair<int, int>>> adj(vertices);
    for(int i{0};i<edges;++i) {
        adj[edge[i][0]].push_back({edge[i][1], edge[i][2]});
        adj[edge[i][1]].push_back({edge[i][0], edge[i][2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    vector<int> ans(vertices);
    vector<bool> visited(vertices, false);
    pair<int, int> top;
    while(!pq.empty()) {
        top = pq.top(), pq.pop();
        if(visited[top.second]) continue;
        ans[top.second] = top.first;
        visited[top.second] = true;
        for(pair<int, int> &pr: adj[top.second]) {
            if(!visited[pr.first]) pq.push({top.first+pr.second, pr.first});
        }
    }
    return ans;
}
