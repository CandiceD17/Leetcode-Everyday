class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        if(!size)
            return {};
        vector<int> res(size, 1);
        int left = 1;
        int right = 1;
        for(int i=0; i<size; i++){
            res[i]*= left;
            left*=nums[i];
            
            res[size-1-i]*= right;
            right*=nums[size-1-i];
        }
        return res;
    }
};

2019.09.18
