class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        if(nums.empty()||nums.front()>0||nums.back()<0)
            return result;
        int size = nums.size();
        for(int i=0; i<size; i++){
            int temp = nums[i];
            if(temp>0) 
                break;
            if(i>0 && temp==nums[i-1])
                continue;
            int l = i+1;
            int r = size-1;
            while(l<r){
                int left = nums[l];
                int right = nums[r];
                if(left+right==-temp){
                    if(l==i+1 || r==size-1){
                        result.push_back(vector<int>{temp,left,right});
                        l++;
                        r--;
                    }
                    else if(left == nums[l-1])
                        l++; 
                    else if(right==nums[r+1])
                        r--;
                    //make sure no repetitive elements
                    else{
                        result.push_back(vector<int>{temp,left,right});
                        l++;
                        r--;                    
                    }
                }
                else if(left+right<-temp)
                    l++;
                else
                    r--;
            }
        }
        return result;
    }
};

2019.07.24
