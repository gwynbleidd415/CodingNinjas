#include <bits/stdc++.h> 
class Trie{
private:
    struct TrieNode {
        int num, numall;
        TrieNode *nodes[26];
        TrieNode() {
            num = 0, numall = 1;
            for(int i{0};i<26;++i) nodes[i] = nullptr;
        }
    };
    TrieNode *head{nullptr};

    int getIndex(char ch) {
        return ch-'a';
    }
    bool isNodeEmpty(TrieNode *node) {
        if(node->num) return false;
        for(int i{0};i<26;++i) if(node->nodes[i]) return false;
        return true;
    }
    tuple<TrieNode *, int, int> initialTraverseHelper(string &word) {
        TrieNode *temp{head};
        int i{0}, index;
        while(i<word.size() && temp->nodes[index = getIndex(word[i])]) temp = temp->nodes[index], ++i;
        return make_tuple(temp, i, index);
    }
    TrieNode *eraseHelper(string &word, int i, TrieNode *th) {
        if(i == word.size()) {
            --th->num, --th->numall;
            if(isNodeEmpty(th)) return nullptr;
            return th;
        }
        int index = getIndex(word[i]);
        th->nodes[index] = eraseHelper(word, i+1, th->nodes[index]);
        if(th->nodes[index] == nullptr && isNodeEmpty(th)) return nullptr;
        --th->numall;
        return th;
    }
public:

    Trie(){
        // Write your code here.
        head = new TrieNode();
    }

    void insert(string &word){
        // Write your code here.
        TrieNode *temp{head};
        int i{0}, index;
        while(i<word.size() && temp->nodes[index = getIndex(word[i])]) ++temp->numall, temp = temp->nodes[index], ++i;
        ++temp->numall;
        for(;i<word.size();++i) {
            index = getIndex(word[i]);
            temp->nodes[index] = new TrieNode();
            temp = temp->nodes[index];
        }
        ++temp->num;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        int i, index;
        TrieNode *temp;
        tie(temp, i, index) = initialTraverseHelper(word);
        if(i==word.size()) return temp->num;
        return 0;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        int i, index;
        TrieNode *temp;
        tie(temp, i, index) = initialTraverseHelper(word);
        if(i==word.size()) return temp->numall;
        return 0;
    }

    void erase(string &word){
        // Write your code here.
        eraseHelper(word, 0, head);
    }
};
