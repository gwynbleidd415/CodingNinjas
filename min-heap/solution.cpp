#include <bits/stdc++.h> 

class MinHeap {
private:
    vector<int> arr;
public:
    MinHeap(): arr{0} {}
    void insert(int num) {
        arr.push_back(num);
        int n = arr.size()-1, par{n>>1};
        while(par>0 && arr[par] > arr[n]) {
            swap(arr[par], arr[n]);
            n = par, par = n>>1;
        }
    }
    int pop() {
        int ans = arr[1];
        swap(arr[1], arr.back());
        arr.pop_back();
        int par{1}, ch1{par<<1}, ch2{ch1+1}, n = arr.size();
        while(true) {
            ch1 = par<<1, ch2 = ch1+1;
            if(ch2 < n && arr[ch2] < arr[ch1] && arr[ch2] < arr[par]) {
                swap(arr[ch2], arr[par]);
                par = ch2;
            } else if(ch1 < n && arr[ch1] < arr[par]) {
                swap(arr[ch1], arr[par]);
                par = ch1;
            } else {
                break;
            }
        }
        return ans;
    }
};

vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> ans;
    MinHeap mh;
    for(vector<int> &val: q) {
        if(val.front() == 0) mh.insert(val[1]);
        else ans.push_back(mh.pop()); 
    }
    return ans;
}
