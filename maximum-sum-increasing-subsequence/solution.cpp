#include <bits/stdc++.h> 
int solution1(vector<int> &rack, int n)
{
	// Write your code here
	vector<int> dp(n);
	dp.front() = rack.front();
	int ans{rack.front()};
	for(int i{1};i<n;++i) {
		dp[i] = rack[i];
		for(int j{0};j<i;++j) {
			if(rack[j] < rack[i]) dp[i] = max(dp[i], dp[j] + rack[i]);
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	// Write your code here
	return solution1(rack, n);
}
