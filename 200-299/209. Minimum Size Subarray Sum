class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum=0;
        int res = INT_MAX;
        int left = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            while(sum>=s){
                res = min(res, i+1-left);
                sum-=nums[left];
                left++;
            }
        }
        return res==INT_MAX ? 0 : res;
    }
};

2019.09.02
