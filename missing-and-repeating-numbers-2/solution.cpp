#include <bits/stdc++.h>

pair<int,int> solution1(vector<int> &arr, int n)
{
	// Write your code here 
	long summ = (long)(n * (n+1)) >> 1;
	long summ2 = (long) n * (n+1) * (2*n + 1) / 6;
	long asumm{0}, asumm2{0};
	for(int i{0};i<n;++i) {
		asumm += arr[i];
		asumm2 += arr[i] * arr[i];
	}
	long amb = summ - asumm;
	long apb = (summ2 - asumm2) / amb;
	return {(amb + apb) >> 1, (apb-amb)>>1};
}

pair<int,int> solution2(vector<int> &arr, int n)
{
	// Write your code here 
	int xorr{n}, axorr{0};
	for(int i{0};i<n;++i) {
		xorr ^= i;
		axorr ^= arr[i];
	}
	int axb = xorr ^ axorr;
	int mx = (((axb - 1) ^ axb) + 1) >> 1;
	int xorr0{0}, xorr1{0};
	if(n & mx) {
		xorr1 = n;
	} else {
		xorr0 = n;
	}
	int axorr0{0}, axorr1{0};
	for(int i{0};i<n;++i) {
		if(i & mx) {
			xorr1 ^= i;
		} else {
			xorr0 ^= i;
		}
		if(arr[i] & mx) {
			axorr1 ^= arr[i];
		} else {
			axorr0 ^= arr[i];
		}
	}
	int a = xorr1 ^ axorr1, b = xorr0 ^ axorr0;
	for(int i{0};i<n;++i) {
		if(arr[i] == a) {
			swap(a, b);
			break;
		}
	}
	return {a, b};
}

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// return solution1(arr, n);
	return solution2(arr, n);
}
