#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), [](pair<int, int> p1, pair<int, int> p2){
        return (double)p1.second/p1.first > (double)p2.second/p2.first;
    });
    int cw{w};
    double profit{0};
    for(int i{0};i<n;++i) {
        if(items[i].first < cw) {
            profit += items[i].second;
            cw -= items[i].first;
        } else if(cw == 0) {
            profit += items[i].second;
            break;
        } else {
            profit += (double)items[i].second/items[i].first*cw;
            break;
        }
    }
    return profit;
}
