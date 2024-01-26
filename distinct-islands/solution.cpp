#include <unordered_set>

class DisjointSet {
private:
    int **par, **sz;
    int n, m;
public:
    DisjointSet(int n, int m) {
        this->n = n, this->m = m;
        par = new int*[n];
        sz = new int*[n];
        int cnt{0};
        for(int i{0};i<n;++i) {
            par[i] = new int[m];
            sz[i] = new int[m];
            for(int j{0};j<m;++j) par[i][j] = cnt++, sz[i][j] = 1;
        }
    }
    int find(int i, int j) {
        if(par[i][j] == i*m+j) return par[i][j];
        return par[i][j] = find(par[i][j]/m, par[i][j]%m);
    }
    void unite(int i, int j, int k, int l) {
        int par1 = find(i, j), par2 = find(k, l);
        if(par1 == par2) return;
        if(sz[par1/m][par1%m] >= sz[par2/m][par2%m]) {
            par[par2/m][par2%m] = par1;
            ++sz[par1/m][par1%m];
        } else {
            par[par1/m][par1%m] = par2;
            ++sz[par2/m][par2%m];
        }
    }
};

string constructString(int **arr, int *tlbr, DisjointSet &dj, int k, int l) {
    int par = dj.find(k, l);
    string str{""};
    for(int i{tlbr[0]};i<=tlbr[2];++i){
        for(int j{tlbr[1]};j<=tlbr[3];++j) {
            str.push_back(dj.find(i, j) == par ? '1' : '0');
        }
        str.push_back('#');
    }
    // cout << str << '\n';
    return str;
}

int *solution1Helper(int** arr, bool** visited, DisjointSet &dj, int n, int m, int i, int j) {
    visited[i][j] = true;
    int *tlbr;
    tlbr = new int[4];
    tlbr[0] = i, tlbr[1] = j, tlbr[2] = i, tlbr[3] = j;
    int *tlbrc;
    if(i>0 && arr[i-1][j] == 1 && !visited[i-1][j]) {
        tlbrc = solution1Helper(arr, visited, dj, n, m, i-1, j);
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
        dj.unite(i, j, i-1, j);
    }
    if(j>0 && arr[i][j-1] == 1 && !visited[i][j-1]) {
        tlbrc = solution1Helper(arr, visited, dj, n, m, i, j-1);
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
        dj.unite(i, j, i, j-1);

    }
    if(i+1<n && arr[i+1][j] == 1 && !visited[i+1][j]) {
        tlbrc = solution1Helper(arr, visited, dj, n, m, i+1, j);
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
        dj.unite(i, j, i+1, j);

    }
    if(j+1<m && arr[i][j+1] == 1 && !visited[i][j+1]) {
        tlbrc = solution1Helper(arr, visited, dj, n, m, i, j+1);
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
        dj.unite(i, j, i, j+1);
    }
    return tlbr;
}

int solution1(int** arr, int n, int m)
{
    //Write your code here
    unordered_set<string> uset;
    // bool visited[n][m] = {false};
    bool **visited;
    visited = new bool*[n];
    for(int i{0};i<n;++i) visited[i] = new bool[m];
    for(int i{0};i<n;++i) {
        for(int j{0};j<m;++j) {
            visited[i][j] = false;
        }
    }
    int *tlbr;
    string str;
    DisjointSet dj(n, m);
    int ans{0};
    for(int i{0};i<n;++i) {
        for(int j{0};j<m;++j) {
            if(arr[i][j] == 0 || visited[i][j]) continue;
            tlbr = solution1Helper(arr, visited, dj, n, m, i, j);
            str = constructString(arr, tlbr, dj, i, j);
            if(uset.find(str) == uset.end()) {
                ++ans;
                uset.insert(str);
            }
        }
    }
    return ans;
}

int *solution2Helper(int** arr, bool** visited, string &str, int n, int m, int i, int j) {
    visited[i][j] = true;
    int *tlbr;
    tlbr = new int[4];
    tlbr[0] = i, tlbr[1] = j, tlbr[2] = i, tlbr[3] = j;
    int *tlbrc;
    if(i>0 && arr[i-1][j] == 1 && !visited[i-1][j]) {
        str.push_back('u');
        tlbrc = solution2Helper(arr, visited, str, n, m, i-1, j);
        str.push_back('b');
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
    }
    if(j>0 && arr[i][j-1] == 1 && !visited[i][j-1]) {
        str.push_back('l');
        tlbrc = solution2Helper(arr, visited, str, n, m, i, j-1);
        str.push_back('b');
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);

    }
    if(i+1<n && arr[i+1][j] == 1 && !visited[i+1][j]) {
        str.push_back('d');
        tlbrc = solution2Helper(arr, visited, str, n, m, i+1, j);
        str.push_back('b');
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);

    }
    if(j+1<m && arr[i][j+1] == 1 && !visited[i][j+1]) {
        str.push_back('r');
        tlbrc = solution2Helper(arr, visited, str, n, m, i, j+1);
        str.push_back('b');
        tlbr[0] = min(tlbr[0], tlbrc[0]);
        tlbr[1] = min(tlbr[1], tlbrc[1]);
        tlbr[2] = max(tlbr[2], tlbrc[2]);
        tlbr[3] = max(tlbr[3], tlbrc[3]);
    }
    return tlbr;
}

int solution2(int** arr, int n, int m)
{
    //Write your code here
    unordered_set<string> uset;
    // bool visited[n][m] = {false};
    bool **visited;
    visited = new bool*[n];
    for(int i{0};i<n;++i) visited[i] = new bool[m];
    for(int i{0};i<n;++i) {
        for(int j{0};j<m;++j) {
            visited[i][j] = false;
        }
    }
    int *tlbr;
    string str;
    int ans{0};
    for(int i{0};i<n;++i) {
        for(int j{0};j<m;++j) {
            if(arr[i][j] == 0 || visited[i][j]) continue;
            str = "c";
            tlbr = solution2Helper(arr, visited, str, n, m, i, j);
            if(uset.find(str) == uset.end()) {
                ++ans;
                uset.insert(str);
            }
        }
    }
    return ans;
}

int distinctIslands(int** arr, int n, int m)
{
    //Write your code here
    // return solution1(arr, n, m);
    return solution2(arr, n, m);
}
