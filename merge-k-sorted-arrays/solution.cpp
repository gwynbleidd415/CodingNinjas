#include <bits/stdc++.h> 
vector<int> solution1(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(int i{0};i<k;++i) pq.push({kArrays[i].front(), i});
    vector<int> ind(k, 1);
    vector<int> ans;
    while(!pq.empty()) {
        pair<int, int> top = pq.top(); pq.pop();
        ans.push_back(top.first);
        if(ind[top.second] != kArrays[top.second].size()) pq.push({kArrays[top.second][ind[top.second]++], top.second});
    }
    return ans;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    return solution1(kArrays, k);
}
