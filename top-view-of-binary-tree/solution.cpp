/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
pair<int, int> maxLeftRight(TreeNode<int> *root) {
    if(root == nullptr) return {-1, -1};
    pair<int, int> left = maxLeftRight(root->left);
    pair<int, int> right = maxLeftRight(root->right);
    return {max(left.first+1, right.first-1), max(left.second - 1, right.second + 1)};
}

vector<int> solution1(TreeNode<int> *root)
{
    // Write your code here.
    pair<int, int> mlr = maxLeftRight(root);
    vector<int> ans(mlr.first+mlr.second+1);
    queue<pair<TreeNode<int> *, int>> qu;
    qu.push({root, mlr.first});
    pair<TreeNode<int> *, int> front;
    while(!qu.empty()) {
        front = qu.front(), qu.pop();
        if(ans[front.second] == 0) ans[front.second] = front.first->data;
        if(front.first->left) qu.push({front.first->left, front.second-1});
        if(front.first->right) qu.push({front.first->right, front.second+1});
    }
    return ans;
}

vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    return solution1(root);
}
