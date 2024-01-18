/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solution1Helper(TreeNode<int> *root, vector<int> &ans) {
    if(root == nullptr) return;
    ans.push_back(root->data);
    solution1Helper(root->left, ans);
    solution1Helper(root->right, ans);
}

vector<int> solution1(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    solution1Helper(root, ans);
    return ans;
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    return solution1(root);
}
