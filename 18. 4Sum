Just an extension from 3 sums:

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        if(size==0)
            return result;
        for(int i=0; i<size; i++){
            int temp1 = nums[i];
            if(i>0 && temp1==nums[i-1])
                continue;
            for(int j=i+1; j<size;j++){
                int temp2 = nums[j];
                if(j>i+1 && temp2 == nums[j-1])
                    continue;
                int l = j+1;
                int r = size-1;
                while(l<r){
                    int left = nums[l];
                    int right = nums[r];
                    if(temp1+temp2+left+right == target){
                        if(l==j+1 || r==size-1){
                            result.push_back(vector<int> {temp1, temp2, left, right});
                            l++; r--;
                        }
                        else if(left == nums[l-1])
                            l++;
                        else if(right == nums[r+1])
                            r--;
                        else{
                            result.push_back(vector<int> {temp1, temp2, left, right});
                            l++; r--;
                        }
                    }
                    else if(temp1+temp2+left+right < target)
                        l++;
                    else
                        r--;
                }
            }
        }
        return result;
    }
};

Tips: we could first insert the elements into a set (since it avoids repetition), then we do not need so many steps to decide
whether there is a repeating element or not.

2019.07.24
