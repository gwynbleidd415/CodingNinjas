#include <vector>
#include <algorithm>

int solution1(int k, int n)
{
    // Write your code here.
    vector<vector<int>> dp(k, vector<int>(n+1));
    iota(dp[0].begin(), dp[0].end(), 0);
    for(int i{1};i<k;++i) {
        int j{1};
        int till = min(i, n)
        for(;j<=till;++j) dp[i][j] = dp[i-1][j];
        int strt{0};
        for(;j<=n;++j) {
            while(j > strt && max(dp[i][strt], dp[i-1][j-1-strt]) >= dp[i][j-1]) ++strt;
            dp[i][j] = j == strt ? dp[i][j-1] + 1 : dp[i][j-1];
            --strt;
        }
    }
    return dp.back().back();
}
int solution2(int k, int n)
{
    // Write your code here.
    vector<vector<int>> dp(2, vector<int>(n+1));
    iota(dp[0].begin(), dp[0].end(), 0);
    bool itr{0};
    for(int i{1};i<k;++i) {
        itr = i&1;
        int j{1};
        int till = min(i, n);
        for(;j<=till;++j) dp[itr][j] = dp[!itr][j];
        int strt{0};
        for(;j<=n;++j) {
            while(j > strt && max(dp[itr][strt], dp[!itr][j-1-strt]) >= dp[itr][j-1]) ++strt;
            dp[itr][j] = j == strt ? dp[itr][j-1] + 1 : dp[itr][j-1];
            --strt;
        }
    }
    return dp[itr].back();
}

int cutLogs(int k, int n)
{
    // Write your code here.
    // return solution1(k, n);
    return solution2(k, n);
}
