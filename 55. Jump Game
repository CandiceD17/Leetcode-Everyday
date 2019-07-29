The first solution is to use recursion; 
however, since there are so many combinations, the running time may be out of limit:
class Solution {
public:
    bool recursion(vector<int> nums, int index, int size){
        if(index>=size)
            return false;
        int temp = nums[index];
        if(temp==0)
            return false;
        bool result;
        for(int i=1; i<=temp;i++){
            if(index+i==size-1)
                return true;
            result = recursion(nums, index+i,size);
            if(result)
                return true;
        }
        return result;
    }
    
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        if(size==1)
            return true;
        bool result = recursion(nums, 0, size);
        return result;
    }
};

There is an easier way to do this: (O(n))
Using Greedy Algorithm:

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size()-1;
        for(int i = last; i>=0; i--){
            if(i+nums[i]>=last)
                last=i;
        }
        return last==0;
    }
};

2019.07.29
