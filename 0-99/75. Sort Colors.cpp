Swap 0 to the front and 2 to the end:
//a one-pass algorithm using only constant space

class Solution {
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        if(size==0 || size==1)
            return;
        int front = 0;
        int back = size-1;
        int i=0;
        bool zeros = true;
        while(i<=back){
            if(nums[i]==2){
                swap(nums[i],nums[back]);
                back--;
            }
            else if(nums[i]==0 && zeros){
                front++;
                i++;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[front]);
                front++;
            }
            else{
                zeros=false;
                i++;
            }
        }
    }
};

2019.08.02
