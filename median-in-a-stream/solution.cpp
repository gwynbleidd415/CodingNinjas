#include <queue>

vector<int> solution1(vector<int> &arr, int n){	
	// Write your code here
	priority_queue<int> pqf;
	priority_queue<int, vector<int>, greater<int>> pqb;
	vector<int> ans(arr.size());
	ans[0] = arr[0];
	pqf.push(arr[0]);
	for(int i{1};i<arr.size();++i) {
		if(arr[i] <= pqf.top()) {
			pqf.push(arr[i]);
			if(pqf.size() > pqb.size() + 1) {
				pqb.push(pqf.top());
				pqf.pop();
				ans[i] = (pqf.top() + pqb.top()) >> 1;
			} else ans[i] = pqf.top();
		} else {
			pqb.push(arr[i]);
			if(pqb.size() > pqf.size()) {
				pqf.push(pqb.top());
				pqb.pop();
				ans[i] = pqf.top();
			} else ans[i] = (pqf.top() + pqb.top()) >> 1;
		}
	}
	return ans;
}
vector<int> findMedian(vector<int> &arr, int n){
	// Write your code here 
	return solution1(arr, n);
}
