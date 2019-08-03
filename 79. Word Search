class Solution {
private:
    string w;
    vector<vector<char>> b;
    
public:
    bool dfs(int r, int c, int i, vector<vector<int>> &block) {
        // cout << r << ", " << c << endl;
        if (i >= w.size()) return 1;
        if (r < 0 || c < 0 || r >= b.size() || c >= b[0].size()) return 0;
        if (block[r][c]) return 0;
        if (b[r][c] != w[i]) return 0;
        block[r][c] = 1;
        bool m1 = dfs(r, c + 1, i + 1, block);
        if (m1) return 1;
        bool m2 = dfs(r, c - 1, i + 1, block);
        if (m2) return 1;
        bool m3 = dfs(r + 1, c, i + 1, block);
        if (m3) return 1;
        bool m4 = dfs(r - 1, c, i + 1, block);
        if (m4) return 1;
        block[r][c] = 0;
        return 0;
    }
    
    bool exist(vector<vector<char>>& b, string w) {
        this->w = w;
        this->b = b;
        vector<vector<int>> block(b.size(), vector<int>(b[0].size(), 0));
        for (int i = 0; i < b.size(); ++i) {
            for (int j = 0; j < b[0].size(); ++j) {
                if (b[i][j] == w[0]) {
                    if (dfs(i, j, 0, block)) return 1;
                }
            }
        }
        return 0;
    }
};

2019.08.03
