class Solution {
public:
    vector<vector<int>> res;
    void recur(int first, int k, int n, vector<int> temp){
        if(temp.size()==k){
            res.push_back(temp);
            return;}
        for(int i=first; i<=n; i++){
            temp.push_back(i);
            recur(i+1, k, n, temp);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        if(k==0)
            return {{}};
        vector<int> temp;
        recur(1, k, n, temp);
        return res;
    }
};

2019.08.03
