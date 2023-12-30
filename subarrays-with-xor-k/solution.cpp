#include <unordered_map>;

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    unordered_map<int, int> hm;
    hm[0] = 1;
    int ans{0}, xorr{0};
    for(int el: a){
        xorr ^= el;
        ++hm[xorr];
        ans += hm[xorr^b];
    }
    return ans;
}