class Solution {
public:
    void helper(int left, int right, string tmp, vector<string> &result) {
        if (left == 0 && right == 0) {
            result.push_back(tmp);
            return;
        }
        
        if (left>right || left<0 || right<0)
            return ;
      
        helper(left-1, right, tmp+'(', result);
        helper(left, right-1, tmp+')', result);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper(n,n, "", result);
        return result;
    }
};

2019.07.25
