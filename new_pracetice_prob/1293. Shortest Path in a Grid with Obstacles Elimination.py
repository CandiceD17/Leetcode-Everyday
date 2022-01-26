class Solution:
    def shortestPath(self, grid: List[List[int]], k: int) -> int:
        row = len(grid)
        if row == 0:
            return -1
        col = len(grid[0])
        if k > row + col - 2:
            return row + col - 2
        
        mat = [[[row * col for i in range(k + 1)] for j in range(col)] for m in range(row)]
        for i in range(k + 1):
            mat[0][0][i] = 0        
        
        def dfs(mat, cur_k, r, c):
            cur_val = mat[r][c][cur_k]
            if r > 0: # up
                if grid[r - 1][c] == 1 and cur_k > 0 and mat[r - 1][c][cur_k - 1] > cur_val + 1:
                    mat[r - 1][c][cur_k - 1] = cur_val + 1
                    dfs(mat, cur_k - 1, r - 1, c)
                elif grid[r - 1][c] == 0 and mat[r - 1][c][cur_k] > cur_val + 1:
                    mat[r - 1][c][cur_k] = cur_val + 1
                    dfs(mat, cur_k, r - 1, c)
            if r < row - 1: # down
                if grid[r + 1][c] == 1 and cur_k > 0 and mat[r + 1][c][cur_k - 1] > cur_val + 1:
                    mat[r + 1][c][cur_k - 1] = cur_val + 1
                    dfs(mat, cur_k - 1, r + 1, c)
                elif grid[r + 1][c] == 0 and mat[r + 1][c][cur_k] > cur_val + 1:
                    mat[r + 1][c][cur_k] = cur_val + 1
                    dfs(mat, cur_k, r + 1, c)
            if c > 0: # left
                if grid[r][c - 1] == 1 and cur_k > 0 and mat[r][c - 1][cur_k - 1] > cur_val + 1:
                    mat[r][c - 1][cur_k - 1] = cur_val + 1
                    dfs(mat, cur_k - 1, r, c - 1)
                elif grid[r][c - 1] == 0 and mat[r][c - 1][cur_k] > cur_val + 1:
                    mat[r][c - 1][cur_k] = cur_val + 1
                    dfs(mat, cur_k, r, c - 1)
            if c < col - 1: # right
                if grid[r][c + 1] == 1 and cur_k > 0 and mat[r][c + 1][cur_k - 1] > cur_val + 1:
                    mat[r][c + 1][cur_k - 1] = cur_val + 1
                    dfs(mat, cur_k - 1, r, c + 1)
                elif grid[r][c + 1] == 0 and mat[r][c + 1][cur_k] > cur_val + 1:
                    mat[r][c + 1][cur_k] = cur_val + 1
                    dfs(mat, cur_k, r, c + 1)
                    
        dfs(mat, k, 0, 0)
        return min(mat[row - 1][col - 1]) if min(mat[row - 1][col - 1]) < row * col else -1
