#include <bits/stdc++.h> 
struct Node{
    bool isEnd;
    vector<Node *> children;
    Node () : isEnd(false), children(26, nullptr) {}
};
class Trie{
private:
    Node *thead;
public:
    Trie() {
        thead = new Node();
    }
    void insert(string str) {
        Node *temp = thead;
        for(char ch: str) {
            if(temp->children[ch-'a'] == nullptr) temp->children[ch-'a'] = new Node();
            temp = temp->children[ch-'a'];
        }
        temp->isEnd = true;
    }
    Node *getItr() {
        return thead;
    }
};

void solution1Helper(int ind, string curr, vector<string> &ans, string &s, unordered_set<string> &dictionary) {
    if(ind == s.size()) {
        ans.push_back(curr);
        return;
    }
    string stemp = "";
    for(int j{ind};j<s.size();++j) {
        stemp.push_back(s[j]);
        if(dictionary.find(stemp) != dictionary.end()) {
            solution1Helper(j+1, curr + stemp + " ", ans, s, dictionary);
        }
    }
}
vector<string> solution1(string &s, vector<string> &dictionary)
{
    // Write your code here
    unordered_set<string> dictionarySet;
    for(string &str: dictionary) dictionarySet.insert(str);
    vector<string> ans;
    solution1Helper(0, "", ans, s, dictionarySet);
    return ans;
}
void solution2Helper(int ind, string curr, vector<string> &ans, string &s, Trie &dictionary) {
    if(ind == s.size()) {
        ans.push_back(curr);
        return;
    }
    string stemp = "";
    Node *thead = dictionary.getItr();
    for(int j{ind};j<s.size();++j) {
        thead = thead->children[s[j] - 'a'];
        if(thead == nullptr) return;
        stemp.push_back(s[j]);
        if(thead->isEnd) {
            solution2Helper(j+1, curr + stemp + " ", ans, s, dictionary);
        }
    }
}
vector<string> solution2(string &s, vector<string> &dictionary)
{
    // Write your code here
    Trie dictionaryTrie;
    for(string &str: dictionary) dictionaryTrie.insert(str);
    vector<string> ans;
    solution2Helper(0, "", ans, s, dictionaryTrie);
    return ans;
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    // return solution1(s, dictionary);
    return solution2(s, dictionary);
}
