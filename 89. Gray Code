class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==0)
            return {0};
        vector<int> result={0,1};
        n--;
        int multiply=2;
        int size=2;
        while(n>0){
            for(int i=size-1; i>=0; i--)
                result.push_back(result[i]+multiply);
            size = 2*size;
            multiply = 2*multiply;
            n--;
        }
        return result;
    }
};

2019.08.04
