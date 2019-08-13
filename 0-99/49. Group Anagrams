class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        unordered_map<string,vector<string>> map;
        //using the sorted strs[i] as key
        for(int i=0; i<size; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto it:map)
            result.push_back(it.second);
        return result;
    }
};

2019.07.28
