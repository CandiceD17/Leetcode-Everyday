class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int res = INT_MIN;
        int imax = 1;
        int imin = 1;
        for(int i=0; i<size; i++){
            if(nums[i]<0){
                int temp = imax;
                imax = imin;
                imin = temp;
            }
            imax = max(nums[i], imax*nums[i]);
            imin = min(nums[i], imin*nums[i]);
            
            res = max(res, imax);
        }
        return res;
    }
};

2019.08.20
