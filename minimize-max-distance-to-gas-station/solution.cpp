double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	int n{(int)arr.size()};	
	int tMax{arr[1]-arr[0]};
	for(int i{2};i<n;++i){
		if(arr[i]-arr[i-1] > tMax) tMax = arr[i] - arr[i-1];
	}
	double l{0}, r{tMax}, mid, tc;
	while(r-l>0.0000001){
		mid = (l+r)/2;
		tc = 0;
		for(int i{1};i<n;++i){
			tc+=ceil((arr[i]-arr[i-1])/mid)-1;
		}
		// cout<<l<<' '<<mid<<' '<<r<<' '<<tc<<'\n';
		// cout << l << '\n';
		if(tc>k) l = mid;
		else r = mid;
	}
	return l;
}
