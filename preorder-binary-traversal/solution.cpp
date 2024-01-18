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
#include <stack>

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

vector<int> solution2(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    TreeNode<int> *top;
    stack<TreeNode<int> *> st;
    st.push(root);
    while(!st.empty()) {
        top = st.top(), st.pop();
        ans.push_back(top->data);
        if(top->right) st.push(top->right);
        if(top->left) st.push(top->left);
    }
    return ans;
}

vector<int> solution3(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    TreeNode<int> *curr{root}, *prev;
    while(curr) {
        ans.push_back(curr->data);
        if(curr->left == nullptr) {
            curr = curr->right;
        } else if(curr->right == nullptr) {
            curr = curr->left;
        } else {
            prev = curr->left;
            while(prev->right || prev->left) {
                if(prev->right) prev = prev->right;
                else prev = prev->left;
            }
            prev->right = curr->right;
            curr = curr->left;
        }
    }
    return ans;
}

vector<int> solution4(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    TreeNode<int> *curr{root}, *prev;
    while(curr) {
        if(curr->left == nullptr) {
            ans.push_back(curr->data);
            curr = curr->right;
        } else {
            prev = curr->left;
            while(prev->right && prev->right != curr) {
                prev = prev->right;
            }
            if(prev->right == nullptr) {
                ans.push_back(curr->data);
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = nullptr;
                curr = curr->right;
            }
        }
    }
    return ans;
}

vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    // return solution1(root);
    // return solution2(root);
    // return solution3(root);
    return solution4(root);
}
