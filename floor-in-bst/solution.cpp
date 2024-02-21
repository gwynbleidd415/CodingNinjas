#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solution1Helper(TreeNode<int> * root, int X, int greatestLow)
{
    // Write your code here.
    if(root == nullptr) return greatestLow;
    if(root->val == X) return X;
    if(root->val > X) return solution1Helper(root->left, X, greatestLow);
    return solution1Helper(root->right, X, root->val);
}

int solution1(TreeNode<int> * root, int X)
{
    // Write your code here.
    return solution1Helper(root, X, -1);
}
int solution2(TreeNode<int> * root, int X)
{
    // Write your code here.
    TreeNode<int> *temp = root;
    int ans{-1};
    while(temp!=nullptr) {
        if(temp->val == X) {
            ans = X;
            break;
        }
        if(temp->val > X) temp = temp->left;
        else ans = temp->val, temp = temp->right;
    }
    return ans;
}

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    // return solution1(root, X);
    return solution2(root, X);
}
