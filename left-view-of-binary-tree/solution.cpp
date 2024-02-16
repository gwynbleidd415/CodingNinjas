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
void solution1Helper(TreeNode<int> *root, int depth, vector<int> &ans) {
    if(root == nullptr) return;
    if(ans.size() == depth) {
        ans.push_back(root->val);
    } else ans[depth] = root->val;
    solution1Helper(root->right, depth+1, ans);
    solution1Helper(root->left, depth+1, ans);
}

vector<int> solution1(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    solution1Helper(root, 0, ans);
    return ans;
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    return solution1(root);
}
