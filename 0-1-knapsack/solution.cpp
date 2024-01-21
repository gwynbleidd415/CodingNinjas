#include <bits/stdc++.h> 
int solution1(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(maxWeight + 1));
	if(weight.front() <= maxWeight) {
		for(int i{weight.front()};i<=maxWeight;++i)
			dp[0][i] = value.front();
	}
	for(int i{1};i<n;++i) {
		for(int j{1};j<=maxWeight;++j) {
			dp[i][j] = (weight[i] > j) ? dp[i-1][j] : max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
		}
	}
	return dp.back().back();
}
int solution2(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<int> dp(maxWeight + 1);
	for(int i{weight.front()};i<=maxWeight;++i) dp[i] = value.front();
	for(int i{1};i<n;++i) {
		for(int j{maxWeight};j>0;--j) {
			dp[j] = (weight[i] > j) ? dp[j] : max(dp[j], dp[j-weight[i]] + value[i]);
		}
	}
	return dp.back();
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	// return solution1(weight, value, n, maxWeight);
	return solution2(weight, value, n, maxWeight);
}
