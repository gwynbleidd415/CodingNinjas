vector<int> dx{0,1,0,-1};
vector<int> dy{1,0,-1,0};
vector<char> direction{'R','D','L','U'};

bool isValid(int row, int col, vector<vector<bool>> &visited, vector<vector<int>> &mat) {
    if (row < 0 || col < 0 ||row == mat.size() || col == mat.front().size() || mat[row][col] == 0 || visited[row][col]) return false;
    return true;
}

void solution1Helper(int row, int col, string &curr, vector<string> &ans, vector<vector<bool>> &visited, vector<vector<int>> &mat) {
    if(row == mat.size()-1 && col == mat.front().size()-1) {
        ans.push_back(curr);
    }
    int x, y;
    for(int i{0};i<4;++i) {
        x = dx[i] + row, y = dy[i] + col;
        if(isValid(x, y, visited, mat)) {
            curr.push_back(direction[i]);
            visited[x][y] = true;
            solution1Helper(x, y, curr, ans, visited, mat);
            visited[x][y] = false;
            curr.pop_back();
        }
    }
}

vector<string> solution1(vector<vector<int>> &mat) {
    // Write your code here.
    if(mat.front().front() == 0 || mat.back().back() == 0) return {};
    int n = mat.size(), m = mat.front().size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<string> ans;
    string curr{""};
    visited[0][0] = true;
    solution1Helper(0, 0, curr, ans, visited, mat);
    return ans;
}
vector<string> ratMaze(vector<vector<int>> &mat) {
    // Write your code here.
    return solution1(mat);
}
