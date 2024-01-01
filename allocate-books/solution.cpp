int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int tSum{arr.front()}, tMax{arr.front()};
    for(int i{1};i<arr.size();++i) tSum += arr[i], tMax = max(tMax, arr[i]);

    int l{tMax}, r{tSum}, mid, tc, ts;
    while(l<r){
        mid = (l+r)>>1;
        tc = 0, ts = 0;
        for(int el: arr){
            ts += el;
            if(ts > mid){
                ts = el, ++tc;
            }
        }
        if(ts && ts <= mid) ++tc;
        if(tc>m) l = mid + 1;
        else r = mid;
    }
    return l;
    // if(m>n) return -1;
    // int tSum = accumulate(arr.begin(), arr.end(), 0);

    // int l{1}, r{tSum}, mid, tc, ts;
    // while(l<r){
    //     mid = (l+r)>>1;
    //     tc = 0, ts = 0;
    //     for(int el: arr){
    //         if(el > mid){
    //             tc = 10000;
    //             break;
    //         }
    //         ts += el;
    //         if(ts > mid){
    //             ts = el, ++tc;
    //         }
    //     }
    //     if(ts && ts <= mid) ++tc;
    //     if(tc>m) l = mid + 1;
    //     else r = mid;
    // }
    // return l;
}