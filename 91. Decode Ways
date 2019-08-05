class Solution {
public:
    int numDecodings(string s) {
       if(s[0]=='0')
           return 0;
        if(s.size()==1)
            return 1;
        vector<int> series(s.size()+1,0);
        series[0] = series[1] = 1;
        for(int i=2; i<=s.size(); i++){
            if(s[i-1]!='0')
                series[i]+=series[i-1];
            if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]-'0'<7))
                series[i]+=series[i-2];
        }
        return series[s.size()];
    }
};

2019.08.05
