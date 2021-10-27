Using resursion:

class Solution {
public:
    void letters(vector<string> &result, map<char,string> key, string &digits){
        if(digits.size()==0)
            return;
        int size = result.size();
        string character = key[digits[0]];
        for(int i = 0; i<size; i++){
            for(int j = 0; j<character.size(); j++){
                result.push_back(result[i]+character[j]);
            }
        }
        result.erase(result.begin(),result.begin()+size);
        digits = digits.substr(1);
        return letters(result, key, digits);
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size() == 0)
            return result;
        string empty = "";
        result.push_back(empty);
        map<char,string> key;
        key['2'] = "abc";
        key['3'] = "def";
        key['4'] = "ghi";
        key['5'] = "jkl";
        key['6'] = "mno";
        key['7'] = "pqrs";
        key['8'] = "tuv";
        key['9'] = "wxyz";
        letters(result, key, digits);
        return result;
    }
};

2019.07.23
