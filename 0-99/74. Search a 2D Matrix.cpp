Using binary search:

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row==0)
            return false;
        int col = matrix[0].size();
        if(col==0)
            return false;
        int left = 0;
        int right = col*row-1;
        while(left<=right){
            int mid = (left+right)/2;
            int num = matrix[mid/col][mid%col];
            if(num == target)
                return true;
            if(num<target)
                left = mid+1;
            else
                right = mid-1;
        }
        return false;
    }
};
