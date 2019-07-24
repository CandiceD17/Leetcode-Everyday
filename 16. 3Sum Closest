class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = -999;
        int size = nums.size();
        int minimum = 999;
        sort(nums.begin(),nums.end());
        if(size==0)
            return 0;
        for(int i=0; i<size; i++){
            int temp = nums[i];
            int l = i+1;
            int r = size-1;
            while(l<r){
                int left = nums[l];
                int right = nums[r];
                int add = left+right+temp;
                if(abs(add-target)<minimum){
                    minimum = abs(add-target);
                    sum = add;}
                if(add==target)
                    return target;
                else if(add<target)
                    l++;
                else
                    r--;
            }
        }
        return sum;
    }
};

2019.07.24
