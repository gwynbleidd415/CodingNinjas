#include <bits/stdc++.h> 

void solution1Helper(int ind, vector<int> &currentSet, vector<vector<int>> &powerSet, vector<int> &v) {
    if(ind == v.size()) {
        powerSet.push_back(currentSet);
        return;
    };
    solution1Helper(ind+1, currentSet, powerSet, v);
    currentSet.push_back(v[ind]);
    solution1Helper(ind+1, currentSet, powerSet, v);
    currentSet.pop_back();
}

vector<vector<int>> solution1(vector<int> &v)
{
    //Write your code here
    vector<vector<int>> powerSet;
    vector<int> currentSet;
    solution1Helper(0, currentSet, powerSet, v);
    return powerSet;
}

vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    return solution1(v);
}
