First method:
Traverse the entire array:

class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        if(size==0)
            return 0;
        for(int i=0; i<size-1; i++){
            if(nums[i+1]<nums[i])
                return nums[i+1];
        }
        return nums[0];
    }
};

Second method:
Binary search

class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        if(size==1 || nums[0]<nums.back())
            return nums[0];
        int l = 0;
        int r = size-1;
        while(l<r){
            int m = (l+r)/2;
            if(m<size-1 && nums[m+1]<nums[m])
                return nums[m+1];
            if(nums[m]>nums[0])
                l = m+1;
            else
                r = m;
        }
        return nums[r]; 
    }
};

Here, time complexity is O(logn)

2019.08.20
