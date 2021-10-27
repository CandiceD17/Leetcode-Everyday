class Solution {
public:
    vector<vector<int>> res;
    void recur(int first, vector<int> nums, vector<int> temp){
        if(first==nums.size())
            return;
        for(int i=first; i<nums.size();i++){
            temp.push_back(nums[i]);
            res.push_back(temp);
            recur(i+1, nums, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        res.push_back({});
        vector<int> temp;
        recur(0, nums, temp);
        return res;
    }
};

2019.08.03
