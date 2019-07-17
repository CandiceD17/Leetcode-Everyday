class Solution {
public:
    int lengthPal (string s){
        int size = s.size();
        for(int i=0; i<size; i++){
            if(s[i]!=s[size-i-1])
                return -1;
        }
        return size;}
    
    string longestPalindrome(string s) {
        int size = s.size();
        int length = 0;
        int temp = 0;
        string result = "";
        for(int i=0; i<size; i++){
            for(int j=size-1; j>=0; j--){
                if(s[j]==s[i]){
                    int temp = lengthPal(s.substr(i,j-i+1));
                    if(length < temp){
                        length = temp;
                        result = s.substr(i,j-i+1);
                        if(i==0 && j==size-1)
                            return result;}}
            }
        }
        return result;
    }
};  

Although this code can generate most correct results, sometimes running an extremely long input with all the same characters
would take a huge amount of times.
This is because hte bigO of this is O(n^3).
So we need to check from the central character (indexed by 1), and spread by 1 (indexed by j) each time around it.
Here is the complete solution:

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        if(size<=1)
            return s;
        string s1="";
        for(int i=0; i<size; i++){
            s1+='!';
            s1+=s[i];}
        s1+='!';
        //'!' will never appear in the string,
        //so add it will make "abba" look like "!a!b!b!a!"
        //unifying the "aba" and "abba" case
        int length = s1.size();
        int longest = 0;
        string result = "";
        for(int i=0; i<length;i++){
            for(int j=1; j<length; j++){
                if(i+j >= length || i-j <=0 || s1[i-j]!=s1[i+j])
                    break;
                //exceeds boundary; first character; or not a palindrome
                if(2*j+1>longest){
                    longest = 2*j+1;
                    result = s1.substr(i-j,longest);
                }
            }
        }
        string newResult ="";
        for(int i=0; i<=longest;i++){
            if(result[i]!='!'){
                newResult += result[i];
            }
        }
        return newResult;
    }
};

2019.07.17
