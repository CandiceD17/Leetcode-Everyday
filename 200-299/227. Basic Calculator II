class Solution {
public:
    int calculate(string s) {
        int size = s.size();
        if(!size)
            return 0;
        stack<int> nums;
        char op = '+';
        int number = 0;
        for(int i=0; i<=size; i++){
            if(i!=size&&isdigit(s[i]))
                number=(s[i]-'0')+number*10;
            else if(i!=size&&s[i]==' ')
                continue;
            else{
                if(op=='+')
                    nums.push(number);
                else if(op=='-')
                    nums.push(-number);
                else{
                    int t = nums.top();
                    nums.pop();
                    if(op=='*')
                        t*=number;
                    else
                        t/=number;
                    nums.push(t);
                }
                op=s[i];
                number=0;
            }
        }
        int res = 0;
        while(!nums.empty()){
            res+=nums.top();
            nums.pop();
        }
        return res;
    }
};

2019.09.05
