/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

bool isParentSum(Node *root){
    // Write your code here.
    if(root->left == nullptr) {
        if(root->right == nullptr) return true;
        if(root->right->data != root->data) return false;
        return isParentSum(root->right);
    }
    if(root->right == nullptr) {
        if(root->left->data != root->data) return false;
        return isParentSum(root->left);
    }
    if(root->left->data + root->right->data != root->data) return false;
    if(!isParentSum(root->left) || !isParentSum(root->right)) return false;
    return true;
}
