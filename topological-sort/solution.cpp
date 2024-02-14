#include <bits/stdc++.h> 
void solution1Helper(int ind, vector<int> &ans, vector<bool> &visited, vector<vector<int>> &adjMatrix) {
    if(visited[ind]) return;
    visited[ind] = true;
    for(int ch: adjMatrix[ind]) {
        solution1Helper(ch, ans, visited, adjMatrix);
    }
    ans.push_back(ind);
}
vector<int> solution1(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<vector<int>> adjMatrix(v);
    for(auto &edge: edges) {
        adjMatrix[edge[0]].push_back(edge[1]);
    }
    vector<bool> visited(v);
    vector<int> ans;
    for(int i{0};i<v;++i) {
        solution1Helper(i, ans, visited, adjMatrix);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    return solution1(edges, v, e);
}
