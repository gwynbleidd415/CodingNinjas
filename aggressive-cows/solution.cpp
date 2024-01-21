int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int l{0}, r{stalls.back() - stalls.front()}, mid, tc, temp;
    while(l<r){
        mid = (l+r+1)>>1;
        tc = 1, temp = stalls[0];
        for(int i{1};i<n;++i){
            if(stalls[i] - temp >= mid) ++tc, temp = stalls[i];
        }
        // cout<<l<<' '<<mid<<' '<<r<<' '<<tc<<'\n';
        if(tc<k) r = mid - 1;
        else l = mid;
    }
    return l;
}
