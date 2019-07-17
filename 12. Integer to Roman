class Solution {
public:
    string intToRoman(int num) {
        int times = 0;
        string result = "";
        while(num>0){
            if(num/1000>0){
                times=num/1000;
                for(int i=0; i<times; i++)
                    result += "M";
                num -= times*1000;
            }
            if(num/900>0){
                times=num/900;
                for(int i=0; i<times; i++)
                    result += "CM";
                num -= times*900;
            }
            if(num/500>0){
                times=num/500;
                for(int i=0; i<times; i++)
                    result += "D";
                num -= times*500;
            }
            if(num/400>0){
                times=num/400;
                for(int i=0; i<times; i++)
                    result += "CD";
                num -= times*400;
            }
            if(num/100>0){
                times=num/100;
                for(int i=0; i<times; i++)
                    result += "C";
                num -= times*100;
            }
            if(num/90>0){
                times=num/90;
                for(int i=0; i<times; i++)
                    result += "XC";
                num -= times*90;
            }
            if(num/50>0){
                times=num/50;
                for(int i=0; i<times; i++)
                    result += "L";
                num -= times*50;
            }
            if(num/40>0){
                times=num/40;
                for(int i=0; i<times; i++)
                    result += "XL";
                num -= times*40;
            }
            if(num/10>0){
                times=num/10;
                for(int i=0; i<times; i++)
                    result += "X";
                num -= times*10;
            }
            if(num/9>0){
                times=num/9;
                for(int i=0; i<times; i++)
                    result += "IX";
                num -= times*9;
            }
            if(num/5>0){
                times=num/5;
                for(int i=0; i<times; i++)
                    result += "V";
                num -= times*5;
            }
            if(num/4>0){
                times=num/4;
                for(int i=0; i<times; i++)
                    result += "IV";
                num -= times*4;
            }
            if(num>0){
                times=num;
                for(int i=0; i<num; i++)
                    result += "I";
                num -= num;}
        }
        return result;
    }
};


There is also a simplified way of writing this:
class Solution {
public:
    string intToRoman(int num) {
        vector<int> values={1000,900,500,400,100,90,50,40,10,9,5,4,1}; 
        vector<string> strs={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i = 0; i < values.size(); i++){
            while(num >= values[i]){
                res += strs[i];
                num -= values[i];
            }
        }
        return res;
        
    }
    
};
Author：powcai
Link：https://leetcode-cn.com/problems/two-sum/solution/ha-xi-jie-jue-by-powcai/
From：LeetCode

2019.07.18
