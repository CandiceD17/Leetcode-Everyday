Using four parameter to define the boundary,
reduce the boundary after each loop:

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int up = 0;
        int down = matrix.size();
        vector<int> result;
        if(down==0)
            return result;
        int right = matrix[0].size();
        bool reverse = false;
        int i = 0;
        int j = 0;
        while(left<right && up<down){
            if(!reverse){
                for(; j<right; j++)
                    result.push_back(matrix[i][j]);
                right--;
                i++; j--;
                for(;i<down;i++)
                    result.push_back(matrix[i][j]);
                down--;
                j--; i--;
                reverse = true;}
            else{
                for(;j>=left;j--)
                    result.push_back(matrix[i][j]);
                left++;
                i--; j++;
                up++;
                for(;i>=up;i--)
                    result.push_back(matrix[i][j]);
                j++; i++;
                reverse = false;}
        }
        return result;
    }
};

2019.07.29
