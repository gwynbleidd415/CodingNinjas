#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

int solution1(TreeNode<int>* root, int &k) 
{
    // Write your code here.
    if(root == nullptr) return -1;
    int right = solution1(root->right, k);
    if(k==0) return right;
    --k;
    if(k==0) return root->data;
    return solution1(root->left, k);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    return solution1(root, k);
}
