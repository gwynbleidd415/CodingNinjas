#include <bits/stdc++.h> 
vector<int> solution1(vector<int> &arr, int k) 
{
    // Write your code here
    unordered_map<int, int> umap;
    int count{0}, i{0};
    for(;i<k;++i) {
        if(umap[arr[i]]==0) {
            ++count;
        }
        ++umap[arr[i]];
    }
    vector<int> ans(arr.size()-k+1);
    ans[0] = count;
    int j{0};
    for(;i<arr.size();++i) {
        if(umap[arr[j]] == 1) {
            --count;
        }
        --umap[arr[j++]];
        if(umap[arr[i]] == 0) {
            ++count;
        }
        ++umap[arr[i]];
        ans[j] = count;
    }
    return ans;
}
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    return solution1(arr, k);
}
