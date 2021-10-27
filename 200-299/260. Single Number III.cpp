class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> container;
        for(int number: nums){
            if(!container.insert(number).second)
                container.erase(number);
        }
        vector<int> res(container.begin(), container.end());
        return res;
    }
};

2019.09.27
