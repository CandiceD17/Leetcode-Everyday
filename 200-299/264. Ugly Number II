class Solution {
public:
    int nthUglyNumber(int n) {
        int i2=0;
        int i3=0;
        int i5=0;
        vector<int> res(1,1);
        for(int i=0; i<n-1; i++){
            int num = min(2*res[i2], min(3*res[i3], 5*res[i5]));
            if(num==2*res[i2]) i2++;
            if(num==3*res[i3]) i3++;
            if(num==5*res[i5]) i5++;
            res.push_back(num);
        }
        return res.back();
    }
};
