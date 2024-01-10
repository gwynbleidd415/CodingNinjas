int solution1(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>> dp(price.size(), vector<int>(n+1));
	for(int i{1};i<=n;++i) dp[0][i] = dp[0][i-1] + price.front();
	for(int i{1};i<price.size();++i) {
		for(int j{1};j<=i;++j) dp[i][j] = dp[i-1][j];
		for(int j{i+1};j<=n;++j) {
			dp[i][j] = max(dp[i-1][j], dp[i][j-i-1] + price[i]);
		}
	}
	return dp.back().back();
}

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	return solution1(price, n);
}
