#include <bits/stdc++.h> 
vector<int> solution1(vector<int> a, int n) {
    // Write your code here.
    vector<int> minn(a.begin(), a.end());
    vector<int> ans(n);
    for(int i{1};i<n;++i) {
        int currMax = minn[n-i];
        for(int j{0};j+i<n;++j) {
            currMax = max(currMax, minn[j]);
            minn[j] = min(minn[j], minn[j+1]);
        }
        ans[i-1] = currMax;
    }
    ans.back() = minn.front();
    return ans;
}
vector<int> solution2(vector<int> a, int n) {
    // Write your code here.
    vector<int> leftGreater(n), rightGreater(n);
    stack<int> st;st.push(-1);
    for(int i{0};i<n;++i) {
        while(st.size() != 1 && a[st.top()] >= a[i]) st.pop();
        leftGreater[i] = i - st.top() - 1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    st.push(n);
    for(int i{n-1};i>=0;--i) {
        while(st.size() != 1 && a[st.top()] >= a[i]) st.pop();
        rightGreater[i] = st.top() - i - 1;
        st.push(i);
    }
    vector<int> ans(n, INT_MIN);
    for(int i{0};i<n;++i) {
        int countGreater = leftGreater[i] + rightGreater[i];
        ans[countGreater] = max(ans[countGreater], a[i]);
    }
    // cout << '\n';
    for(int i{n-2};i>=0;--i) {
        if(ans[i] < ans[i+1]) ans[i] = ans[i+1];
    }
    return ans;
}

vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    // return solution1(a, n);
    return solution2(a, n);
}
