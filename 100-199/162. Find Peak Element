class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int size = nums.size();
      if(size==0)
        return 0;
      int l = 0;
      int r = size-1;
      while(l<r){
        int mid = (l+r)/2;
        if(nums[mid]<nums[mid+1])
          l=mid+1;
        else
          r=mid;
      }
      return r; 
    }
};

2019.08.23
