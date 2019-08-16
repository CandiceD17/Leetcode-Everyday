class Solution {
public:
    set<vector<int>> res;
    void recur(int first, vector<int> nums, vector<int> temp){
        if(first==nums.size())
            return;
        for(int i=first; i<nums.size();i++){
            temp.push_back(nums[i]);
            res.insert(temp);
            recur(i+1, nums, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        recur(0, nums, temp);
        vector<vector<int>> result;
        for(auto it:res)
            result.push_back(it);
        result.push_back({});
        return result;
    }
};

2019.08.04
