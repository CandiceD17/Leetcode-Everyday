class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result = {-1,-1};
        if(size==0)
            return result;
        
        int left = 0;
        int right = size-1;
        int mid=-1;
       
       //binary search to find target
        while(left<=right){
            int index=(left+right)/2;
            if(nums[index]==target){
                mid=index;
                break;}
            if(nums[index]<target)
                left=index+1;
            else
                right=index-1;
        }
        if(mid==-1)
            return result;
        
        //expand around target
        left=right=mid;
        while(left>0){
            if(nums[left-1]==target)
                left--;
            else
                break;
        }
        while(right<size-1){
            if(nums[right+1]==target)
                right++;
            else
                break;
        }
        
        result[0]=left;
        result[1]=right;
        return result;
    }
};

2019.07.26
