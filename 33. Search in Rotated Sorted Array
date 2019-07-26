class Solution {
public:   
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if(size==0)
            return -1;
        if(size==1){
            if(nums[0]==target) return 0;
            return -1;
        }
        
        //find the first decreasing number
        int mid=0;
         while(mid<=nums.size()-2&&nums[mid]<nums[mid+1])
            mid++;
        
        //determine the interval of search
        int left = 0;
        int right = size-1;
        if(nums[mid]==target)
            return mid;
        if(target>=nums[0])
            right = mid;
        else
            left = mid+1;
        
        //binary search
        while(left<=right){
            int index = (left+right)/2;
            if(nums[index]==target)
                return index;
            else if(nums[index]>target)
                right = index-1;
            else
                left = index+1;
        }
        return -1;
    }
};

2019.07.26
