// https://leetcode.cn/problems/biao-shi-shu-zhi-de-zi-fu-chuan-lcof/
class Solution {
public:
    bool isInteger(string s, bool digitOnly){
        if (s.size() == 0)
            return false;
        int index = 0;
        if (!digitOnly) {
            if (s[0] == '+' || s[0] == '-'){
                index = 1;
                if (s.size() == 1)
                    return false;
            }
        }
        for (int i = index; i < s.size(); i++){
            if (!isdigit(s[i]))
                return false;
        }
        return true;
    }
    bool isFloat(string s){
        if (s.size() == 0)
            return false;
        if (s[0] == '+' || s[0] == '-'){
            s = s.substr(1);
            if (s.size() == 0)
                return false;
        }
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '.'){
                if (i == 0)
                    return isInteger(s.substr(i + 1), true);
                if (i == s.size() - 1)
                    return isInteger(s.substr(0, i), true);
                return isInteger(s.substr(0, i), true) && isInteger(s.substr(i + 1), true);
            }
        }
        return false;
    }
    bool isNumber(string s) {
        int start = s.find_first_not_of(" ");
        if (start == std::string::npos) {
            return false;
        }
        int end = s.find_last_not_of(" ");
        string finalS = s.substr(start, end - start + 1);
        for (int i = 0; i < finalS.size(); i++){
            if (finalS[i] == 'e' || finalS[i] == 'E'){
                return (isInteger(finalS.substr(0, i), false) || isFloat(finalS.substr(0, i))) && isInteger(finalS.substr(i + 1), false);
            }
        }
        return isInteger(finalS, false) || isFloat(finalS);
    }
};
// 2023.06.21
