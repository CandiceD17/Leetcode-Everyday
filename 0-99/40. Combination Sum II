First sort the numbers, then recursion.
Use set to avoid repetition, then push back all the vector<int> in set to res.

class Solution {
public:
     void combination(int index, vector<int>& candidates, int target, set<vector<int>>& result, vector<int> temp){
        if(target<0)
            return;
        if(target==0){
            result.insert(temp);
            return;}
        for(int i=index+1; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            combination(i, candidates, target-candidates[i], result, temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if(candidates.empty())
            return {};
        sort(candidates.begin(),candidates.end());
        set<vector<int>> result;
        vector<int> temp;
        combination(-1, candidates, target, result, temp);
        vector<vector<int>> res;
        for(auto it:result)
            res.push_back(it);
        return res;
    }
};
