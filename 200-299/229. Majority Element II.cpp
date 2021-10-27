Using the Boyer-Moore Majority Vote Algorithm,
A number has to be greater than n/3, so there are at most 2 such numbers;
if nums[i]==number, count++; else count--;
if a number is the majority element, its count has to be greater than 0

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(!n)
            return {};
        int num1 = 0;
        int num2 = 0;
        int count1=0;
        int count2=0;
        
        for(int i=0; i<n; i++){
            if(count1==0 && num2!=nums[i]){
                num1=nums[i];
                count1++;
            }
            else if(count2==0 && num1!=nums[i]){
                num2=nums[i];
                count2++;
            }
            else if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
            else{
                count1--;
                count2--;
            }
        }
        
        count1=0;
        count2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
        }
        
        vector<int> res;
        if(count1>n/3)
            res.push_back(num1);
        if(count2>n/3)
            res.push_back(num2);
        return res;
    }
};

2019.09.06
