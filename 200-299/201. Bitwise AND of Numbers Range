class Solution {
public:
    int rangeBitwiseAnd(int m, int n)     {
        int count = 0;
        while (m != n)
        {
            m >>= 1;
            n >>= 1;
            count++;
        }
        n <<= count;
        return n;
    }
};

2019.09.02
