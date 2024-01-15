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
#include <unordered_map>

vector<int> solution1(TreeNode<int> * root){
    // Write your code here.
    unordered_map<int, TreeNode<int> *> umap;
    queue<pair<int, TreeNode<int> *>> qu;
    qu.push(make_pair(0, root));
    pair<int, TreeNode<int> *> top;
    int minn{0};
    while(!qu.empty()) {
        top = qu.front();
        qu.pop();
        if(minn > top.first) minn = top.first;
        umap[top.first] = top.second;
        if(top.second->left) qu.push(make_pair(top.first - 1, top.second->left));
        if(top.second->right) qu.push(make_pair(top.first + 1, top.second->right));
    }
    int size = umap.size();
    vector<int> ans(size);
    for(auto &itr: umap) {
        ans[itr.first - minn] = itr.second->data;
    }
    return move(ans);
}
vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.
    return solution1(root);
}
