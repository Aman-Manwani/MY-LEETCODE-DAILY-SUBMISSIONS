class TrieNode {
    public:
    vector<TrieNode *>v;
    bool isEnd;
    TrieNode(){
        isEnd = false;
        v.resize(26,NULL);
    }
};

class Trie {
public:
    TrieNode * root;
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode * node = root;
        for(int i=0;i<word.length();i++)
        {
            if(node -> v[word[i]-'a'] == NULL)
            {
                node -> v[word[i]-'a'] = new TrieNode();
            }
            node = node -> v[word[i]-'a'];
        }
        node -> isEnd = true;
    }
    
    bool search(string word) {
        TrieNode * node = root;
        for(int i=0;i<word.length();i++)
        {
            if(node -> v[word[i]-'a'] == NULL)
            {
                return false;
            }else
            {
                node = node -> v[word[i]-'a'];
            }
        }
        if(node -> isEnd == true)
            return true;
        return false;
    }
    
    bool startsWith(string s) 
    {
        TrieNode * node = root;
        for(int i=0;i<s.length();i++)
        {
            if(node -> v[s[i]-'a'] == NULL)
            {
                return false;
            }
            node = node ->v[s[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */