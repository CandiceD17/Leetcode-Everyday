class Solution {
public:
    int myAtoi(string str) {
        int size = str.size();
        string result = "";
        bool first = true;
        for(int i=0; i<size; i++){
            if(first && str[i]==' ')
                continue;
             else if(first && !isdigit(str[i]) &&
                     str[i]!='+' && str[i]!='-')
                 return 0;
            else if(first && str[i]=='-'){
                result+='-';
                first = false;
                continue;
            }
            else if(first && str[i]=='+'){
                first = false;
                continue;
            }
            else if(isdigit(str[i])){
                first = false;
                result+=str[i];
            }
            else
                break;
            }
        if(result=="")
            return 0;
        long result2;
        stringstream a(result);
        a >> result2;
        if(result2<INT_MIN)
            return INT_MIN;
        else if(result2>INT_MAX)
            return INT_MAX;
        else
            return result2;
    }
};

However, this method takes too long.
There is an easier way using the stringstream:

class Solution {
public:
    int myAtoi(string str) {
        while(*str.begin() == ' ') 
            str.erase(str.begin());
        if(str == "") return 0;
        stringstream ss(str);
        int n;
        ss>>n;
        return n;
    }
};


2019.07.17
