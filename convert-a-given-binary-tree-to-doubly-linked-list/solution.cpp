#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#define BTNI BinaryTreeNode<int>
#define PBTNIP2 pair<BTNI *, BTNI *>

PBTNIP2 solution1Helper(BinaryTreeNode<int>* root) {
    // Write your code here
    BTNI *left{root}, *right{root};
    if(root->left) {
        PBTNIP2 leftChild = solution1Helper(root->left);
        root->left = leftChild.second;
        leftChild.second->right = root;
        left = leftChild.first;
    }
    if(root->right) {
        PBTNIP2 rightChild = solution1Helper(root->right);
        root->right = rightChild.first;
        rightChild.first->left = root;
        right = rightChild.second;
    }
    return {left, right};
}
BinaryTreeNode<int>* solution1(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root == nullptr) return nullptr;
    PBTNIP2 range = solution1Helper(root);
    return range.first;
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    return solution1(root);
}
