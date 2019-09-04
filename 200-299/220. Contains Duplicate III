class Solution {
public:
    long getKey(long a, long w){
        return a < 0 ? (a + 1) / w - 1 : a / w;
    }
    
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(t<0)
            return false;
        unordered_map<int, long> bucket;
        long w = (long)t+1;
        for(int i=0; i<nums.size(); i++){
            long cur = getKey(nums[i], w);
            if(bucket.count(cur))
                return true;
            if(bucket.count(cur-1) && abs(nums[i]-bucket[cur-1])<=t)
                return true;
            if(bucket.count(cur+1) && abs(nums[i]-bucket[cur+1])<=t)
                return true;
            bucket[cur] = nums[i];
            if(i-k>=0)
                bucket.erase(getKey(nums[i-k],w));
        }
        return false;
    }
};

2019.09.04
