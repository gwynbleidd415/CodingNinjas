#include <algorithm>

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&finish](int a, int b){
        return finish[a] < finish[b];
    });
    int ans{0}, eT{0};
    for(int i{0};i<n;++i) {
        if(start[index[i]] >= eT) {
            ++ans;
            eT = finish[index[i]];
        }
    }
    return ans;
}
