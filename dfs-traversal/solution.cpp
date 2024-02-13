void solution1DFS(int root, vector<int> &arr, vector<bool> &visited, vector<vector<int>> &adj) {
    if(visited[root]) return;
    arr.push_back(root);
    visited[root] = true;
    for(int conn: adj[root]) {
        solution1DFS(conn, arr, visited, adj);
    }
}

vector<vector<int>> solution1(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> adj(V);
    for(int i{0};i<E;++i) {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<bool> visited(V);
    vector<vector<int>> ans;
    for(int i{0};i<V;++i) {
        if(visited[i]) continue;
        vector<int> arr;
        solution1DFS(i, arr, visited, adj);
        ans.push_back(move(arr));
    }
    return ans;
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    return solution1(V, E, edges);
}
