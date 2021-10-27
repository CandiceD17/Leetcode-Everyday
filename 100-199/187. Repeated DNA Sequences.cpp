class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int size = s.size();
        unordered_map<string, int> hash;
        vector<string> res;
        for(int i=0; i<=size-10; i++){
            string temp = s.substr(i,10);
            hash[temp]++;
            if(hash[temp]==2)
                res.push_back(temp);
        }
        return res;
    }
};

2019.08.26
