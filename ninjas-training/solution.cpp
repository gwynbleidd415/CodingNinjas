int solution1(int n, vector<vector<int>> &points) {
    vector<int> pts(3), ptst(3);
    pts[0] = pts[1] = pts[2];
    for(vector<int> &day: points) {
        ptst = pts;
        pts[0] = max(ptst[1], ptst[2]) + day[0];
        pts[1] = max(ptst[0], ptst[2]) + day[1];
        pts[2] = max(ptst[0], ptst[1]) + day[2];
    }
    return max(pts[0], max(pts[1], pts[2]));
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    return solution1(n, points);
}