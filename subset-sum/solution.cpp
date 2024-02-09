void solution1Helper(vector<int> &num, int i, int summ, vector<int> &ans) {
	if(i == num.size()) {
		ans.push_back(summ);
		return;
	}
	solution1Helper(num, i+1, summ, ans);
	solution1Helper(num, i+1, summ+num[i], ans);
}

vector<int> solution1(vector<int> &num) {
	vector<int> ans;
	solution1Helper(num, 0, 0, ans);
	sort(ans.begin(), ans.end());
	return ans;
}

vector<int> solution2(vector<int> &num) {
	int n = num.size();
	int pow2 = pow(2, n);
	vector<int> ans;
	for(int i{0};i<pow2;++i) {
		int summ = 0;
		int pos = 0;
		for(int iter = 1 << (n-1);iter>0; iter >>= 1) {
			if(i & iter) summ += num[pos];
			++pos;
		}
		ans.push_back(summ);
	}
	sort(ans.begin(), ans.end());
	return ans;
}

vector<int> solution3(vector<int> &num) {
	int n = num.size();
	int pow2 = pow(2, n);
	vector<int> ans;
	for(int i{0};i<pow2;++i) {
		int summ = 0;
		for(int iter{0};iter<n;++iter) {
			if(i & (1<<iter)) summ += num[iter];
		}
		ans.push_back(summ);
	}
	sort(ans.begin(), ans.end());
	return ans;
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	// return solution1(num);
	// return solution2(num);
	return solution3(num);
}
