class Solution {
private:
    unordered_map<char, vector<string>> hash;
    bool valid = false;
public:
    void helper(string s){
        if(s==""){
            valid = true;
            return;
        }
        if(hash.count(s[0])==0)
            return;
        for(int i=0; i<hash[s[0]].size(); i++){
            string cur=hash[s[0]][i];
            int size = cur.size();
            if(s.substr(0, size) == cur){
                string ss=s.substr(size);
                helper(ss);
            }
        }
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        int size = wordDict.size();
        for(int i=0; i<size; i++)
            hash[wordDict[i][0]].push_back(wordDict[i]);
        helper(s);
        return valid;
    }
};

But it says exceed time limit when running with large outputs.
We can use a better algorithm with BFS:
start from j, if we can reach i, set test[i] to true, increment i.

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> hash(wordDict.begin(), wordDict.end());
        vector<bool> test(s.size()+1, false);
        test[0] = true;
        for(int i=1; i<s.size()+1; i++){
            for(int j=0; j<i; j++){
                if(test[j] && hash.count(s.substr(j, i-j))){
                    test[i]=true;
                    break;
                }
            }
        }
        return test[s.size()];
    }
};
