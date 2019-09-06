class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        if(!size)
            return {};
        queue<int> store;
        vector<string> res;
        for(int i=0; i<size-1; i++){
            if(store.empty()){
                if(nums[i+1]==1+nums[i])
                    store.push(nums[i]);
                else{
                    string a = to_string(nums[i]);
                    res.push_back(a);
                }
            }
            else{
                if(nums[i+1]==1+nums[i])
                    continue;
                else{
                    string a = to_string(store.front());
                    store.pop();
                    a+="->";
                    a+=to_string(nums[i]);
                    res.push_back(a);
                }
            }
        }
        if(store.empty()){
            string a = to_string(nums[size-1]);
            res.push_back(a);
        }
        else{
            string a = to_string(store.front());
            store.pop();
            a+="->";
            a+=to_string(nums[size-1]);
            res.push_back(a);
        }
        return res;
    }
};

2019.09.06
