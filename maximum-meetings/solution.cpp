int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
    int n = start.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&end](int a, int b){
        return end[a] < end[b];
    });
    int ans{0}, lastEnd{-1};
    for(int i{0};i<n;++i) {
        if(start[index[i]]>lastEnd) {
            ++ans, lastEnd = end[index[i]];
        }
    }
    return ans;
}
