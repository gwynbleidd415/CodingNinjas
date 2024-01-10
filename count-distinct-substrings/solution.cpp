class Trie {
private:
    struct Node {
        Node *arr[26];
        Node() {
            for(int i{0};i<26;++i) arr[i] = nullptr;
        }
    };
    int getIndex(char ch) {
        return ch - 'a';
    }
    Node *head;
public:
    Trie() {
        head = new Node();
    }
    int insert(string &word, int si, int ei) {
        Node *temp{head};
        int index;
        for(;si<=ei && temp->arr[index = getIndex(word[si])]; ++si) temp = temp->arr[index];
        int nwi = ei - si + 1;
        for(;si <= ei;++si) {
            index = getIndex(word[si]);
            temp->arr[index] = new Node();
            temp = temp->arr[index];
        }
        return nwi;
    }
};

int countDistinctSubstrings(string &s)
{
    //    Write your code here.
    Trie *trie = new Trie();
    int ans{1};
    int n = s.size() - 1;
    for(int i{0};i<=n;++i){
        ans += trie->insert(s, i, n);
    }
    return ans;
}
