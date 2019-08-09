Using brute force:
class Solution {
public:
    bool valid(vector<char> test){
        vector<int> key(9);
        for(int i=0; i<9; i++){
            if(test[i]=='.')
                continue;
            if(key[test[i]-'1']==1)
                return false;
            key[test[i]-'1']++;
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
      //rows
        for(int i=0; i<9; i++){
            if(!valid(board[i]))
                return false;
        }
        
        //columns
        for(int i=0; i<9; i++){
            vector<char> test;
            for(int j=0; j<9; j++)
                test.push_back(board[j][i]);
            if(!valid(test))
                return false;
        }
        
        //sub-boxes
        for(int i=0; i<9; i+=3){
            vector<char> test;
            for(int j=0; j<3; j++){
                test.push_back(board[i][j]);
                test.push_back(board[i+1][j]);
                test.push_back(board[i+2][j]);
            }
            if(!valid(test))
                return false;
        }
        for(int i=0; i<9; i+=3){
            vector<char> test;
            for(int j=3; j<6; j++){
                test.push_back(board[i][j]);
                test.push_back(board[i+1][j]);
                test.push_back(board[i+2][j]);
            }
            if(!valid(test))
                return false;
        }
        for(int i=0; i<9; i+=3){
            vector<char> test;
            for(int j=6; j<9; j++){
                test.push_back(board[i][j]);
                test.push_back(board[i+1][j]);
                test.push_back(board[i+2][j]);
            }
            if(!valid(test))
                return false;
        }
        return true;
    }
};

However, there is an easier way to do this:
We can only do one time traversal, and record each number in separate unordered map.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<int,int>> row(9), col(9), block(9);
        for(int i = 0; i < 9; ++ i){
            for(int j = 0; j < 9; ++ j){
                int bindex =  (i / 3)* 3 + j / 3;
                char cur = board[i][j];
                if(cur == '.')  continue;
                if(row[i].count(cur) || col[j].count(cur) || block[bindex].count(cur))  return false;
                row[i][cur] = 1;
                col[j][cur] = 1;
                block[bindex][cur] = 1;
            }
        }
        return true;
    }
};

Author：youlookdeliciousc

2019.07.26
