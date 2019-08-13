This is a simple combination problem:

class Solution {
public:
    int NCR(int n, int r){
    if (r == 0) return 1;
    if (r > n / 2) return NCR(n, n - r); 
    long res = 1; 
    for (int k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }
    return res;
}
    
    int uniquePaths(int m, int n) {
        return NCR(m+n-2,m-1);
        //C(m-1+n-1, m-1)
    }
};

2019.07.30
