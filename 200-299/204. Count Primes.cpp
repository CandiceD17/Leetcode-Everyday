class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> map(n, true);
        for(int i=2; i<n; i++){
            if(map[i]){
                count++;
                for(int j=i*2; j<n; j+=i)
                    map[j]=false;
            }
        }
        return count;
    }
};

2019.09.02
