int merge(vector<int> &nums, int a, int b){
    int mid = (a+b)>>1;
    vector<int> res(b-a+1);
    int i{a}, j{mid+1}, count{0};
    for(int k{0};k<res.size();++k){
        if(j>b || (i<=mid && nums[i]<=nums[j])) res[k] = nums[i++];
        else{
            res[k] = nums[j++];
            count += mid - i + 1;
        }
    }
    for(j=0, i=a;i<=b;++i, ++j) nums[i] = res[j];
    return count;
}

int mergeSort(vector<int> &nums, int a, int b){
    if(b<=a) return 0;
    int mid = (a+b)>>1;
    int l = mergeSort(nums, a, mid);
    int r = mergeSort(nums, mid+1, b);

    return l + r + merge(nums, a, b);
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    return mergeSort(a, 0, n-1);
}
