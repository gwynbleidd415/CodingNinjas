/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void solution1Helper(TreeNode<int> *root, bool shouldConsiderLeft, bool shouldConsiderRight, vector<int> &ans, vector<int> &right) {
    if(root->left == nullptr && root->right == nullptr) {
        ans.push_back(root->data);
        return;
    }
    if(shouldConsiderLeft) ans.push_back(root->data);
    else if(shouldConsiderRight) right.push_back(root->data);
    if(root->left) {
        if(root->right) {
            solution1Helper(root->left, shouldConsiderLeft, false, ans, right);
            solution1Helper(root->right, false, shouldConsiderRight, ans, right);
            return;
        }
        solution1Helper(root->left, shouldConsiderLeft, shouldConsiderRight, ans, right);
        return;
    }
    solution1Helper(root->right, shouldConsiderLeft, shouldConsiderRight, ans, right);
}
vector<int> solution1(TreeNode<int> *root)
{
	// Write your code here.
    if(root == nullptr) return {};
    vector<int> ans;
    vector<int> right;
    ans.push_back(root->data);
    if(root->left) solution1Helper(root->left, true, false, ans, right);
    if(root->right) solution1Helper(root->right, false, true, ans, right);
    ans.insert(ans.end(), right.rbegin(), right.rend());
    return ans;
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    return solution1(root);
}
