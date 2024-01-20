/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

pair<int, int> solution1Helper(TreeNode *root, int &ans, int &nc) {
    if(root == nullptr) return {INT32_MAX, INT32_MIN};
    pair<int, int> left, right;
    int curnc{nc};
    left = solution1Helper(root->left, ans, nc);
    right = solution1Helper(root->right, ans, nc);
    if(left.second >= root->data || right.first <= root->data) {
        return {INT32_MIN, INT32_MAX};
    }
    ++nc;
    ans = max(ans, nc-curnc);
    return {min(root->data, left.first), max(root->data, right.second)};
}

int solution1(TreeNode *root) {
    int ans{0}, nc{0};
    solution1Helper(root, ans, nc);
    return ans;
}

int largestBST(TreeNode * root){
    // Write your code here.
    return solution1(root);
}
