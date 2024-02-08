#include <algorithm>

class DisjointSet{
private:
    vector<int> par;
public:
    DisjointSet(int n) {
        par.resize(n);
        iota(par.begin(), par.end(), 0);
    }
    int find(int x) {
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    void unite(int x, int y) {
        int parx = find(x), pary = find(y);
        if(parx == pary) return;
        if(parx < pary) par[pary] = parx;
        else par[parx] = pary; 
    }
};

vector<int> solution1(vector<vector<int>> &jobs) {
    int n = jobs.size();
    sort(jobs.begin(), jobs.end(), [](vector<int> &job1, vector<int> &job2) {
        return job1[2] > job2[2];
    });
    int nJobs{0}, profit{0}, dfind;
    DisjointSet dj(n+1);

    for(int i{0};i<n;++i) {
        dfind = dj.find(jobs[i][1]);
        if(dfind != 0) {
            dj.unite(dfind, dfind-1);
            profit += jobs[i][2];
            ++nJobs;
        }
    }
    return {nJobs, profit};
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    return solution1(jobs);
}
