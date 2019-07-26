Using recursion: 

class Solution {
public:
    void combination(int index, vector<int>& candidates, int target, vector<vector<int>>& result, vector<int> temp){
        if(target<0)
            return;
        if(target==0){
            result.push_back(temp);
            return;}
        for(int i=index; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            combination(i, candidates, target-candidates[i], result, temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.empty())
            return {};
        vector<vector<int>> result;
        vector<int> temp;
        combination(0, candidates, target, result, temp);
        return result;
    }
};

2019.07.26
