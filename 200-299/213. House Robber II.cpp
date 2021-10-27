class Solution {
public:
    int find(vector<int>& nums){
        vector<int> store(nums.size()+1, 0);
        store[0]=0;
        store[1] = nums[0];
        for(int i = 1; i<nums.size(); i++){
            store[i+1] = max(store[i], store[i-1]+nums[i]);
        }
        return store.back();
    }
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size==0)
            return 0;
        if(size==1)
            return nums[0];
        vector<int> temp = nums;
        temp.erase(temp.begin());
        int first = find(temp);
        nums.pop_back();
        int sec = find(nums);
        return max(first, sec);
    }
};

2019.09.03
