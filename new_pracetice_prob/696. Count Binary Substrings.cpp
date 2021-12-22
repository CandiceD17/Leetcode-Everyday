class Solution {
public:
    int countBinarySubstrings(string s) {
        bool change = false;
        int zero = 0, one = 0, res = 0, size = s.size();
        for(int i = 0; i < size; i++){
            if(s[i] == '0'){
                if(change){
                    zero = 0;
                    change = false;
                }
                zero++;
                if(one >= zero)
                    res++;
            }
            else if(s[i] == '1'){
                if(change){
                    one = 0;
                    change = false;
                }
                one++;
                if(zero >= one)
                    res++;
            }
            if(i+1 < size && s[i] != s[i+1])
                change = true;
        }
        return res;
    }
};

//leetcode sol:
class Solution {
public:
    int countBinarySubstrings(string s) {
        int ptr = 0, n = s.size(), last = 0, ans = 0;
        while (ptr < n) {
            char c = s[ptr];
            int count = 0;
            while (ptr < n && s[ptr] == c) {
                ++ptr;
                ++count;
            }
            ans += min(count, last);
            last = count;
        }
        return ans;
    }
};
