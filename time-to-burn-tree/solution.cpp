/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solution1Helper(BinaryTreeNode<int> *root, const int &start, int &ans, bool &isFound){
    if(root == nullptr) return 0;
    bool isLC{false}, isRC{false}, wasFound{isFound};
    int left{solution1Helper(root->left, start, ans, isFound)};
    if(!wasFound && isFound) isLC = wasFound = true;
    int right{solution1Helper(root->right, start, ans, isFound)};
    if(!wasFound && isFound) isRC = wasFound = true;
    if(root->data == start) {
        isFound = true;
        ans = max(left, right);
        return 1;
    }
    if(isLC || isRC) {
        ans = max(ans, left + right);
        return 1 + (isLC ? left : right);
    }
    return max(left, right) + 1;
}
int solution1(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    int ans{INT32_MIN};
    bool isFound{false};
    solution1Helper(root, start, ans, isFound);
    return ans;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    return solution1(root, start);
}
