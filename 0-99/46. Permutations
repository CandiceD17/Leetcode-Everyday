Using recursion, push back all the possible solutions:

class Solution {
public:
    void recur(vector<int> nums, vector<vector<int>>& result, vector<int> temp){
        if(nums.size()==0){
            result.push_back(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            int number = nums[i];
            temp.push_back(number);
            nums.erase(nums.begin()+i);
            recur(nums, result, temp);
            nums.push_back(number);
            sort(nums.begin(),nums.end());
            temp.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int size = nums.size();
        if(size==0)
            return {};
        vector<vector<int>> result;
        if(size==1){
            result.push_back(nums);
            return result;
        }
        sort(nums.begin(),nums.end());
        vector<int> temp;
        recur(nums, result, temp);
        return result;
    }
};

However, there is an easier way to do it:
Swap to find all possible permutations:

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums,res,0);
        return res;
    }
    void swap(int &a,int &b)
  {
      int temp;
      temp=a;
      a=b;
      b=temp;
  }
     void backtrack(vector<int> &nums,vector<vector<int>> &res,int i){
         if(i==nums.size())
             res.push_back(nums);
         for(int j=i;j<nums.size();j++){
             swap(nums[i],nums[j]);
             backtrack(nums,res,i+1);
             swap(nums[i],nums[j]);
         }
     }
};

Author：she-wo-qi-shui

2019.07.27
