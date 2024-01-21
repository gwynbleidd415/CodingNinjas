#include <bits/stdc++.h> 

bool solution1(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n, vector<bool>(k+1));
    for(int i{0};i<n;++i) dp[i][0] = true;
    if(arr.front() <= k) dp[0][arr.front()] = true;
    for(int i{1};i<n;++i) {
        for(int j{1};j<=k;++j) {
            dp[i][j] = arr[i] > j ? dp[i-1][j] : (dp[i-1][j] || dp[i-1][j-arr[i]]);
        }
    }
    return dp.back().back();
}
bool solution2(int n, int k, vector<int> &arr) {
    vector<bool> dp(k+1);
    dp[0] = true;
    for(int i{0};i<n;++i) {
        for(int j{k};j>0;--j) {
            if(arr[i] <= j) {
                dp[j] = dp[j] || dp[j-arr[i]];
            }
        }
    }
    return dp.back();
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    // return solution1(n, k, arr);
    return solution2(n, k, arr);
}
