int solution1(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>> dp(n+1, vector<int>(w+1));
	for(int i{0};i<n;++i) {
		int j{0};
		while(j<=w && j<weights[i]) dp[i+1][j] = dp[i][j], ++j;
		while(j<=w) dp[i+1][j] = max(dp[i][j], dp[i][j-weights[i]]+values[i]), ++j;
	}
	return dp.back().back();
}
int solution2(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<int> dp(w+1);
	for(int i{0};i<n;++i) {
		int j{w};
		while(j>=weights[i]) dp[j] = max(dp[j], dp[j-weights[i]] + values[i]), --j;
	}
	return dp.back();
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	// return solution1(values, weights, n, w);
	return solution2(values, weights, n, w);
}
