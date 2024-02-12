bool isPalindrome(string &str, int s, int e) {
    while(s<e) {
        if(str[s] != str[e]) return false;
        ++s, --e;
    }
    return true;
}
int solution1(string &str)
{
    // Write your code here
    int n = str.size();
    vector<vector<bool>> subStrPalindrome(n, vector<bool>(n));
    for(int i{0};i<n;++i){
        for(int j{i};j<n;++j) {
            subStrPalindrome[i][j] = isPalindrome(str, i, j);
        }
    }
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for(int i{1};i<n;++i) {
        if(subStrPalindrome[0][i]) {
            dp[i] = 0;
            continue;
        }
        for(int j{0};j<i;++j) {
            if(subStrPalindrome[j+1][i]) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }
    return dp.back();
}
int palindromePartitioning(string str)
{
    // Write your code here
    return solution1(str);
}
