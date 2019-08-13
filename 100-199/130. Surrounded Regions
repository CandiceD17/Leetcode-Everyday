class Solution {
private:
    int r;
    int c;
public:
    void dfs(vector<vector<char>>& board, int i, int j){
        if(i<0 || j<0 || i>=r || j>=c || board[i][j]!='O')
            return;
        board[i][j]='!';
        dfs(board, i+1, j);
        dfs(board, i-1, j);
        dfs(board, i, j+1);
        dfs(board, i, j-1);

    }
    void solve(vector<vector<char>>& board) {
        r = board.size();
        if(r==0||r==1 || r==2)
            return;
        c = board[0].size();
        if(c==0 || c==1 || c==2)
            return;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                bool edge = (i==0 || j==0 || i==r-1 || j==c-1);
                if(edge && board[i][j]=='O')
                    dfs(board,i,j);
            }
        }
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(board[i][j]=='!')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
};

2019.08.12
