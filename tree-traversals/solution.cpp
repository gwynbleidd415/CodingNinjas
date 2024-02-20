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
void allTraversals(TreeNode *root, vector<vector<int>> &ans){
    // Write your code here.
    if(root == nullptr) return;
    ans[1].push_back(root->data);
    allTraversals(root->left, ans);
    ans[0].push_back(root->data);
    allTraversals(root->right, ans);
    ans[2].push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans(3);
    allTraversals(root, ans);
    return ans;
}
