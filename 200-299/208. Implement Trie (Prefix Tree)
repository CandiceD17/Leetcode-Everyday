class Trie {
private:
    struct Node{
    public:
        vector<Node*> child;
        char val;
        Node(char v){
            val = v;
        }
    };
    Node* root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node('!');
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* cur = root;
        for(int i=0; i<word.size(); i++){
            bool find = false;
            for(int j=0; j<cur->child.size(); j++){
                if(cur->child[j]->val==word[i]){
                    cur = cur->child[j];
                    find = true;
                    break;}
            }
            if(!find){
                Node* temp = new Node(word[i]);
                cur->child.push_back(temp);
                cur = cur->child.back();
            }
        }
        Node* end = new Node('!');
        cur->child.push_back(end);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* cur = root;
        for(int i=0; i<word.size(); i++){
            bool find = false;
            for(int j=0; j<cur->child.size(); j++){
                if(cur->child[j]->val==word[i]){
                    cur = cur->child[j];
                    find = true;
                    break;}
            }
            if(!find)
                return false;
        }
         for(int i=0; i<cur->child.size(); i++){
            if(cur->child[i]->val=='!')
                return true;
        }
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node* cur = root;
        for(int i=0; i<prefix.size(); i++){
            bool find = false;
            for(int j=0; j<cur->child.size(); j++){
                if(cur->child[j]->val==prefix[i]){
                    cur = cur->child[j];
                    find = true;
                    break;}
            }
            if(!find)
                return false;
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
 
 2019.09.02
