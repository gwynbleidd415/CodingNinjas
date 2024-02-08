vector<int> MinimumCoins(int n)
{
    // Write your code here
    vector<int> coins{1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int cn = coins.size();
    vector<int> ans;
    int div;
    for(int i{0};i<cn;++i) {
        if(n < coins[i]) continue;
        div = n/coins[i];
        for(int j{0};j<div;++j) ans.push_back(coins[i]);
        n = n - div*coins[i];
    }
    return ans;
}
