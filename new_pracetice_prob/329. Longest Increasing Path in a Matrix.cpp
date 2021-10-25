class Solution {
public:
    int longestPath(vector<vector<int>>& longest_path, int r, int c, vector<vector<int>>& matrix){
        if(longest_path[r][c] != 0){
            return longest_path[r][c];
        }
        longest_path[r][c]++;
        
        int row = matrix.size();
        int col = matrix[0].size();        
        if(r > 0 && matrix[r-1][c] > matrix[r][c]){
            longest_path[r][c] = max(longest_path[r][c], longestPath(longest_path, r - 1, c, matrix) + 1);
        }
        if(r < row - 1 && matrix[r+1][c] > matrix[r][c]){
            longest_path[r][c] = max(longest_path[r][c], longestPath(longest_path, r + 1, c, matrix) + 1);
        }
        if(c > 0 && matrix[r][c-1] > matrix[r][c]){
            longest_path[r][c] = max(longest_path[r][c], longestPath(longest_path, r, c - 1, matrix) + 1);
        }
        if(c < col - 1 && matrix[r][c+1] > matrix[r][c]){
            longest_path[r][c] = max(longest_path[r][c], longestPath(longest_path, r, c + 1, matrix) + 1);
        }
        return longest_path[r][c];
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        if (row == 0 || col == 0){
            return 0;
        }
        auto longest_path = vector< vector<int> > (row, vector <int> (col));
        int res, r, c;
        res = r = c = 0;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                res = max(res, longestPath(longest_path, i, j, matrix));
            }
        }
        return res;
    }
};

执行用时：
36 ms, 在所有 C++ 提交中击败了 91.76% 的用户
内存消耗：
15.6 MB, 在所有 C++ 提交中击败了 72.83% 的用户
通过测试用例：
138 / 138
