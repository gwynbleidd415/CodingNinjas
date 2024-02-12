long solution1(int *denominations, int n, int value)
{
    //Write your code here
    long *dp = new long[value+1];
    dp[0]=1L;
    for(int i{1};i<=value;++i) dp[i] = 0L;
    for(int i{0};i<n;++i) {
        for(int j{denominations[i]};j<=value; ++j) {
            dp[j] += dp[j - denominations[i]];
        }
    }
    return dp[value];
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    return solution1(denominations, n, value);
}
