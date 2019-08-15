class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
            return nums[0];
        sort(nums.begin(), nums.end());
        for(int i=0; i<size; i++){
            if(i==size-1 && nums[i]!=nums[i-1])
                return nums[i];
            if(i==0 && nums[i]!=nums[i+1])
                return nums[i];
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
                return nums[i];
        }
        return 0;
    }
};

2019.08.15
