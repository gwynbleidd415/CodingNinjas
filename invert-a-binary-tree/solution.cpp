#include <bits/stdc++.h> 
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
bool solution1Helper(TreeNode<int> *root, TreeNode<int> *parent, TreeNode<int> **leaf){
    if(root == nullptr) return false;
    if(root->data == (*leaf)->data) {
        *leaf = root;
        root->left = parent;
        return true;
    }
    if(solution1Helper(root->left, root, leaf)) {
        root->left = parent;
        return true;
    }
    if(solution1Helper(root->right, root, leaf)) {
        root->right = root->left;
        root->left = parent;
        return true;
    }
    return false;
}
TreeNode<int> * solution1(TreeNode<int> *root, TreeNode<int> *leaf)
{
	// Write your code here.
    if(root == leaf) return leaf;
    solution1Helper(root, nullptr, &leaf);
    return leaf;
}
TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
	// Write your code here.
    return solution1(root, leaf);
}
