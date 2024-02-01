#include <bits/stdc++.h> 

long long merge(long long *arr, int s, int m, int e) {
    int ns = e-s+1;
    long long *nArr = new long long[ns];
    int k{0}, i{s}, j{m+1};
    long long swaps{0};
    while(i<=m && j<=e) {
        if(arr[i] < arr[j]) nArr[k++] = arr[i++];
        else{
            nArr[k++] = arr[j++];
            swaps += m-i+1;
        }
    }
    while(i<=m) {
        nArr[k++] = arr[i++];
    }
    while(j<=e) {
        nArr[k++] = arr[j++];
    }
    k = 0, i = s;
    for(;k<ns;++k,++i) {
        arr[i] = nArr[k];
    }
    return swaps;
}

long long mergeSort(long long *arr, int s, int e) {
    if(s==e) return 0;
    int m = (s+e)>>1;
    long long left = mergeSort(arr, s, m);
    long long right = mergeSort(arr, m+1, e);
    return left + right + merge(arr, s, m, e);
}

long long solution1(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr, 0, n-1);
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return solution1(arr, n);
}
