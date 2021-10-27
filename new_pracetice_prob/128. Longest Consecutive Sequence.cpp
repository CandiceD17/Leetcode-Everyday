class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> table;
        
        for(const int& n: nums){
            table.insert(n);
        }
        
        for(const int& n: nums){
            if(table.count(n - 1) == 0){
                int cur = n;
                int length = 1;
                
                while(table.count(++cur) > 0){
                    length++;
                }
                
                res = max(res, length);
            }
        }
        
        return res;
    }
};
