/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

void solution1Helper(TreeNode *root, int key, int &left, int &right)
{
    // Write your code here.
    if(root == nullptr) return;
    if(root->data == key) {
        if(root->left) {
            TreeNode *temp = root->left;
            while(temp->right) temp = temp->right;
            left = temp->data;
        }
        if(root->right) {
            TreeNode *temp = root->right;
            while(temp->left) temp = temp->left;
            right = temp->data;
        }
        return;
    } else if(root->data > key) {
        right = root->data;
        solution1Helper(root->left, key, left, right);
    } else {
        left = root->data;
        solution1Helper(root->right, key, left, right);
    }
}
pair<int, int> solution1(TreeNode *root, int key)
{
    // Write your code here.
    int left{-1}, right{-1};
    solution1Helper(root, key, left, right);
    return {left, right};
}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    return solution1(root, key);
}
