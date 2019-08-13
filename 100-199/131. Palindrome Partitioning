Using recursion:

class Solution {
private:
    vector<vector<string>> res;
    string s;
public:
    bool isPalindrome(string cur){
        int size=cur.size();
        for(int i=0; i<size/2; i++){
            if(cur[i]!=cur[size-1-i])
                return false;
        }
        return true;
    }
    
    void helper(int index, vector<string> temp){
        if(index>=s.size()){
            res.push_back(temp);
            return;
        }
        for(int j=1; j<=s.size()-index; j++){
            string cur = s.substr(index, j);
            if(isPalindrome(cur)){
                temp.push_back(cur);
                helper(index+j, temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        this->s = s;
        vector<string> temp;
        helper(0, temp);
        return res;
    }
};

2019.08.13
