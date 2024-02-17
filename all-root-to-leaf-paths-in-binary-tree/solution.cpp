/********************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        int data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    
********************************************************************/

void fillAns(string str, vector<string> &ans, BinaryTreeNode<int> *root) {
    if(root == nullptr) return;
    string newStr = str + to_string(root->data) + " ";
    if(root->left == nullptr && root->right == nullptr) {
        ans.push_back(newStr);
        return;
    }
    fillAns(newStr, ans, root->left);
    fillAns(newStr, ans, root->right);
}

vector <string> solution1(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector<string> ans;
    fillAns("", ans, root);
    return ans;
}
vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    return solution1(root);
}
