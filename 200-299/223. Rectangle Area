class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
       if(A>E)
           return computeArea(E,F,G,H,A,B,C,D);
        if(E>C || B>H || F>D)
            return (C-A)*(D-B)+(G-E)*(H-F);
        int width = min(C,G) - max(A,E);
        int length = min(D,H) - max(B,F);
        return (C-A)*(D-B)-width*length+(G-E)*(H-F);
    }
};

2019.09.05
