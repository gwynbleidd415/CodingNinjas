bool isValid(vector<vector<int>> &mat, vector<int> &vc, int m, int i){
    for(int j{0};j<mat.size();++j) {
        if(mat[i][j] == 1 && vc[j] == m) return false;
    }
    return true;
}

bool graphColoringHelper(vector<vector<int>> &mat, int m, vector<int> &vc, int i) {
    if(i == mat.size()) return true;
    for(int j{1};j<=m;++j){
        if(isValid(mat, vc, j, i)) {
            vc[i] = j;
            if(graphColoringHelper(mat, m, vc, i+1)) return true;
            vc[i] = 0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    vector<int> vc(mat.size());
    if(graphColoringHelper(mat, m, vc, 0)) return "YES";
    else return "NO";
}
