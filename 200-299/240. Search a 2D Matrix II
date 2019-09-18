time complexity：O（m+n）
class Solution {
private:
    int row;
    int col;
public:
    bool depth(vector<vector<int>> matrix, int r, int c, int target){
        if(r<0 || c>=col)
            return false;
        if(matrix[r][c]==target)
            return true;
        if(target<matrix[r][c])
            return depth(matrix, r-1, c, target);
        if(target>matrix[r][c])
            return depth(matrix,r,c+1,target);
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        row = matrix.size();
        if(!row) return false;
        col = matrix[0].size();
        if(!col) return false;
        if(target<matrix[0][0] || target>matrix[row-1][col-1])
            return false;
        return depth(matrix, row-1, 0, target);
    }
};

class Solution {
private:
    int row;
    int col;
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        row = matrix.size();
        if(!row) return false;
        col = matrix[0].size();
        if(!col) return false;
        if(target<matrix[0][0] || target>matrix[row-1][col-1])
            return false;
        int r = row-1;
        int c = 0;
        while(r>=0 && c<col){
            if(matrix[r][c]==target)
                return true;
            else if(matrix[r][c]<target)
                c++;
            else
                r--;
        }
        return false;
    }
};

2019.09.18
