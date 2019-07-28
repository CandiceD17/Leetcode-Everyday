Using basic principle of number multiplication:

class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        if(num1=="0" || num2=="0")
            return "0";
        vector<int> result(len1+len2, 0); //to store every digit in this multiplication
        for(int i=len2-1; i>=0; i--){
            int bit = len1+i; //start from the last position in result
            for(int j=len1-1; j>=0; j--){
                int number=(num1[j]-'0')*(num2[i]-'0')+result[bit];
                if(number>=10)
                    result[bit-1]+=number/10;
                result[bit]=number%10;
                bit--;
            }
        }
        bool first = true;
        string res = "";
        for(int i=0; i<len1+len2; i++){
            if(first && result[i]==0)
                continue;
            else{
                first = false;
                res+=char(result[i]+'0');
            }
        }
        if(res=="")
            return "0";
        return res;
    }
};

2019.07.28
