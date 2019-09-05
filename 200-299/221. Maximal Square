class Solution {
public:
    int minimal(int a, int b, int c){
        int first = min(a,b);
        int sec = min(b,c);
        return min(first, sec);
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(!row) return 0;
        int col = matrix[0].size();
        if(!col) return 0;
        int maxlength = 0;
        vector<int> temp(col+1);
        vector<vector<int>> store(row+1, temp);
        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                if(matrix[i-1][j-1]=='1'){
                    store[i][j]= minimal(store[i-1][j], store[i][j-1], store[i-1][j-1])+1;
                    maxlength = max(maxlength, store[i][j]);
                }
            }
        }
        return maxlength*maxlength;
    }
};

2019.09.05
