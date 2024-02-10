#include <bits/stdc++.h> 
long long solution1(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long start{0}, mid, finish{0};
	for(int i{0};i<m;++i) finish += time[i], start = max(start, (long long)time[i]);
	while(start < finish) {
		mid = (start + finish) >> 1;
		int cnt{1};
		long long curr{0};
		for(int i{0};i<m;++i) {
			if(curr + time[i] > mid) {
				curr = time[i];
				++cnt;
			} else curr += time[i];
		}
		if(cnt > n) start = mid + 1;
		else finish = mid;
	}
	return start;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	return solution1(n, m, time);
}
