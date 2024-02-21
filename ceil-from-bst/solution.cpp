#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int solution1(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans{-1};
    BinaryTreeNode<int> *temp = node;
    while(temp!=nullptr) {
        if(temp->data == x) {
            ans = x;
            break;
        }
        if(temp->data < x) temp = temp->right;
        else {
            ans = temp->data;
            temp = temp->left;
        }
    }
    return ans;
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    return solution1(node, x);
}
