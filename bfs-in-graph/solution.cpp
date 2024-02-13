vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    queue<int> qu;
    qu.push(0);
    vector<int> ans;
    ans.reserve(n);
    vector<bool> visited(n);
    visited[0] = true;
    while(!qu.empty()) {
        ans.push_back(qu.front());
        for(int i: adj[qu.front()]) {
            if(visited[i]) continue;
            visited[i] = true;
            qu.push(i);
        }
        qu.pop();
    }
    return ans;
}
