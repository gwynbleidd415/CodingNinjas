#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int solution1(int n) {
 	// Write your code here.
	queue<int> qu;
	for(int i{0};i<n;++i) qu.push(i);
	while(qu.size() > 1) {
		int f1 = qu.front(); qu.pop();
		int f2 = qu.front(); qu.pop();
		if(knows(f1, f2)) {
			if(knows(f2, f1)) continue;
			qu.push(f2);
		} else if(knows(f2, f1)) qu.push(f1);
	}
	if(qu.size() == 0) return -1;
	int f1 = qu.front();
	for(int i{0};i<n;++i) {
		if(i == f1) continue;
		if(!knows(i, f1) || knows(f1, i)) return -1;
	}
	return f1;
}

int solution2(int n) {
 	// Write your code here.
	int citr{0};
	for(int i{1};i<n;++i) {
		if(knows(citr, i)) {
			if(knows(i, citr)) citr = i+1, ++i;
			else citr = i;
		} else if(!knows(i, citr)) {
			citr = i+1, ++i;
		}
	}
	if(citr == n) return -1;
	for(int i{0};i<n;++i) {
		if(i == citr) continue;
		if(!knows(i, citr) || knows(citr, i)) return -1;
	}
	return citr;
}
int findCelebrity(int n) {
 	// Write your code here.
	// return solution1(n);
	return solution2(n);
}
