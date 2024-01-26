#include <unordered_set>

string topoSort(vector<unordered_set<int>> &adj, int k) {
    vector<int> inorder(k, 0);
    for(int i{0};i<k;++i) {
        for(int j: adj[i]) ++inorder[j];
    }
    queue<int> qu;
    for(int i{0};i<k;++i) {
        if(inorder[i] == 0) qu.push(i);
    }
    string str{""};
    while(!qu.empty()) {
        str.push_back(char(qu.front()+'a'));
        for(int j: adj[qu.front()]) if(--inorder[j] == 0) qu.push(j);
        qu.pop();
    }
    return str;
}

void solution1Helper(vector<string> &dictionary, vector<unordered_set<int>> &adj, int si, int ei, int ii) {
    while(si<ei && dictionary[si].size() == ii) ++si;
    int nsi{si}, nei{si};
    for(int i{si+1};i<=ei;++i) {
        if(dictionary[i][ii] != dictionary[nsi][ii]) {
            adj[dictionary[nsi][ii] - 'a'].insert(dictionary[i][ii] - 'a');
            solution1Helper(dictionary, adj, nsi, nei, ii+1);
            nsi = i;
        }
        nei = i;
    }
}

string solution1(vector<string> &dictionary, int k)
{
    // Write your code here.
    vector<unordered_set<int>> adj(k);
    solution1Helper(dictionary, adj, 0, dictionary.size()-1, 0);
    return topoSort(adj, k);
}

string solution2(vector<string> &dictionary, int k)
{
    // Write your code here.
    vector<unordered_set<int>> adj(k);
    int ei = dictionary.size()-1;
    for(int i{0};i<ei;++i) {
        for(int j{0};j<dictionary[i].size();++j) {
            if(dictionary[i][j] != dictionary[i+1][j]) {
                adj[dictionary[i][j]-'a'].insert(dictionary[i+1][j]-'a');
                break;
            }
        }
    }
    return topoSort(adj, k);
}

string getAlienLanguage(vector<string> &dictionary, int k)
{
    // Write your code here.
    // return solution1(dictionary, k);
    return solution2(dictionary, k);
}