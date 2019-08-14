class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        if(r==0)
            return;
        int c = matrix[0].size();
        set<int> row;
        set<int> col;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it:row){
            for(int i=0; i<c; i++)
                matrix[it][i]=0;
        }
        for(auto it:col){
            for(int i=0; i<r; i++)
                matrix[i][it]=0;
        }
        return;
    }
};

However, there is a smarter way with space complexity O(1):
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool rowfirst = false;
        bool colfirst = false;
        for (int i = 0; i< rows;i++) {
            for (int j = 0;j<cols;j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                    if (i == 0) rowfirst = true;
                    if (j == 0) colfirst = true;
                }
            }
        }
        for (int i=1;i<rows;i++) {
            for (int j = 1;j<cols;j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        
        if (rowfirst) {
            for (int i = 0;i<cols;i++) {
                matrix[0][i] = 0;
            }
        }
        if (colfirst) {
            for (int i = 0;i<rows;i++) {
                matrix[i][0] = 0;
            }
        }
        
    }
};

2019.08.02
