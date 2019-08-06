class Solution {
public:
    int catalan(int n){
        double res = 1;
        for(int i=0; i<n; i++){
            res*= (2*n-i);
            res/= n-i;
        }
        res/=n+1;
        int result = res;
        if(res-result>=0.5)
            return result+1;
        return result;
    }
    
    int numTrees(int n) {
        //the catalan number
        //n = n vertices
        // num trees = C(2n,n)/(n+1)
        return catalan(n);
    }
};

2019.08.06
