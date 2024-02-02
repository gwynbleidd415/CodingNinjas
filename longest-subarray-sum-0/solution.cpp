#include <bits/stdc++.h>

int solution1(vector < int > &arr) {
  // Write your code here
  int n = arr.size();
  unordered_map<long, int> umap;
  unordered_map<long, int>::iterator uitr;
  umap.insert({0, -1});
  long summ{0};
  int ans{0};
  for(int i{0};i<n;++i) {
    summ = summ + arr[i];
    uitr = umap.find(summ);
    if(uitr == umap.end()) {
      umap.insert({summ, i});
    } else {
      ans = max(ans, i - uitr->second);
    }
  }
  return ans;
}

int LongestSubsetWithZeroSum(vector < int > &arr) {
  // Write your code here
  return solution1(arr);
}
