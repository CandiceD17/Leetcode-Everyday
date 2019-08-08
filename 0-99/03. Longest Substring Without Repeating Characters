class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int alphabet[59] = {0}; //an alphabet using the ascii code
        int index;
        int length = 0;
        int maxlength = 0;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i]))
                index = s[i]-'A';
            else if (s[i]==' ')
                index = 58;
            else
                continue;
            if(alphabet[index] == 0){
                alphabet[index]++;
                length++;
            }
            else {
                if (length > maxlength)
                    maxlength = length;
                length = 1;
            }
        }  
        return (maxlength>=length) ? maxlength : length;
    }
};

This code fails at a test case: "dvdf"; it returns 2 instead of 3. 
After counting "dv", it encounters a repeating 'd'. Rather than starting from 'v' to count the longest series,
this code starts from the second 'd'.
So each time we find a repeating character, we should count again from the next character after the first appearance 
of the repeating one.

Here is the completed code:
//using the sliding window method (start from i, extend the window to j until meets a repeating character;
then increment i to j'+1 )
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> numMap;
        int size = s.size();
        int length = 0;
        for(int i = 0, j = 0; j<size; j++){
            if(numMap.count(s[j])>0)
                i = max (numMap[s[j]],i);
            length = max (length, j-i+1);
            numMap[s[j]]=j+1;
        }
        return length;
    }
};

Runtime: 20 ms, faster than 64.35% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 11 MB, less than 37.92% of C++ online submissions for Longest Substring Without Repeating Characters.

2019.07.09
