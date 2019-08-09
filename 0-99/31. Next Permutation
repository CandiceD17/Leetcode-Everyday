class Solution {
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    void reverse(vector<int>& nums, int index){
        int size = nums.size();
        int last = size-1;
        while(index<last){
            swap(nums[index], nums[last]);
            index++;
            last--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int i = size-2;
        while(i>=0 && nums[i+1]<=nums[i])
            i--;
        if(i>=0){
            int j = size-1;
            while(j>0 && nums[j]<=nums[i])
                j--;
            swap(nums[i],nums[j]);
        }
        reverse(nums, i+1);
    }
};

2019.07.25
