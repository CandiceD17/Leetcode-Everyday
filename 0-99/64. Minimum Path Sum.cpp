class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        if(r==0)
            return 0;
        int c = grid[0].size();
        vector<int> temp(c,0);
        vector<vector<int>> record(r,temp);
        record[0][0] = grid[0][0];
        for(int i=1; i<r; i++)
            record[i][0] = record[i-1][0]+grid[i][0];
        for(int i=1; i<c; i++)
            record[0][i] = record[0][i-1]+grid[0][i];
        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                record[i][j] = min(record[i][j-1],record[i-1][j])+grid[i][j];
            }
        }
        return record[r-1][c-1];
    }
};

2019.08.01
