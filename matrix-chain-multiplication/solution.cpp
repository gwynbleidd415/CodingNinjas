#include <bits/stdc++.h> 

int solution1(vector<int> &arr, int N)
{
    // Write your code here.
    if(N < 3) return 0;
    int n1 = N-1;
    vector<vector<int>> dp(N+1, vector<int>(n1));
    for(int i{1};i<n1;++i) {
        for(int j{0};j+i<n1;++j) {
            int minn = INT_MAX;
            for(int k{j};k<i+j;++k) {
                minn = min(minn, arr[j] * arr[k+1] * arr[i+j+1] + dp[j][k] + dp[k+1][i+j]);
            }
            dp[j][i+j] = minn;
        }
    }
    return dp.front().back();
}
int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    return solution1(arr, N);
}
