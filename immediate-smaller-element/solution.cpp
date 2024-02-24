void immediateSmaller(vector<int>& a)
{
	// Write your code here.
	int n = a.size()-1;
	for(int i{0};i<n;++i) {
		if(a[i] > a[i+1]) a[i] = a[i+1];
		else a[i] = -1;
	}
	a[n] = -1;
}
