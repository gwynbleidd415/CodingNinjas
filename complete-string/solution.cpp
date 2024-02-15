#include <bits/stdc++.h> 

class Trie {
private:
    struct Node {
        bool isEnd;
        vector<Node *> children;
        Node() {
            isEnd = false;
            children.resize(26);
            fill(children.begin(), children.end(), nullptr);
        }
    };
    Node *head, *titr;
    int getIndex(char ch) {
        return ch-'a';
    }
public:
    Trie() {
        head = new Node();
    }
    void insert(string &str) {
        Node *iter = head;
        int index;
        for(char ch: str) {
            index = getIndex(ch);
            if(iter->children[index] == nullptr) {
                iter->children[index] = new Node();
            }
            iter = iter->children[index];
        }
        iter->isEnd = true;
    }
    Node *getHead() {
        return head;
    }
    void resetTrieIter() {
        titr = head;
    }
    bool isCharPresentNext(char ch) {
        int index = getIndex(ch);
        if(titr->children[index] == nullptr) return false;
        titr = titr->children[index];
        return titr->isEnd;
    }
};

string solution1(int n, vector<string> &a){
    // Write your code here.
    Trie trie;
    sort(a.begin(), a.end());
    for(string &str: a) trie.insert(str);
    string ans{""};
    for(string &str: a) {
        trie.resetTrieIter();
        int i{0};
        for(;i<str.size();++i) {
            if(!trie.isCharPresentNext(str[i])) break;
        }
        if(i == str.size() && ans.size() < i) {
            ans = str;
        }
    }
    if(ans == "") return "None";
    return ans;
}

string completeString(int n, vector<string> &a){
    // Write your code here.
    return solution1(n, a);
}
