class WordDictionary {
private:
    struct Node{
    public:
        bool end = false;
        vector<Node*> child;
        Node(){
            for(int i=0; i<26; i++){
                child.push_back(NULL);
            }
        }
    };
    Node* root;
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new Node();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Node* cur = root;
        for(int i=0; i<word.size(); i++){
            if(!cur->child[word[i]-'a'])
                cur->child[word[i]-'a']=new Node();
            cur = cur->child[word[i]-'a'];
        }
        cur->end = true;
    }
    
    bool dfs(Node* cur, string word, int index){
        if(!cur) return false;
        if(index>=word.size())
            return cur->end;
        if(word[index]!='.'){
            if(cur->child[word[index]-'a'])
                return dfs(cur->child[word[index]-'a'], word, index+1);
            return false;
        }
        for(int i=0; i<26; i++){
            if(cur->child[i] && dfs(cur->child[i], word, index+1))
                return true;
        }
        return false;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return dfs(root, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
 
 2019.09.03
