class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        row = len(grid)
        col = len(grid[0])
        visited = [[0 for _ in range(col)] for _ in range(row)]

        def dfs(grid, cur_loc):
            if visited[cur_loc[0]][cur_loc[1]]:
                return
            visited[cur_loc[0]][cur_loc[1]] = 1
            dirs = [(1, 0), (0, 1), (-1, 0), (0, -1)]
            for dir in dirs:
                new_r = cur_loc[0] + dir[0]
                new_c = cur_loc[1] + dir[1]
                if 0 <= new_r < row and 0 <= new_c < col and grid[new_r][new_c] == "1":
                    dfs(grid, (new_r, new_c))
        
        def find_unvisited_island(grid):
            for r in range(row):
                for c in range(col):
                    if grid[r][c] == "1" and visited[r][c] == 0:
                        return (r, c)
            return -1
        
        ans = 0
        while find_unvisited_island(grid) != -1:
            dfs(grid, find_unvisited_island(grid))
            ans += 1
        
        return ans

# ^^First Version: Time out for the last test case
# Optimal solution:

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        row = len(grid)
        col = len(grid[0])
        visited = [[0 for _ in range(col)] for _ in range(row)]

        def dfs(grid, cur_loc):
            if visited[cur_loc[0]][cur_loc[1]]:
                return
            visited[cur_loc[0]][cur_loc[1]] = 1
            dirs = [(1, 0), (0, 1), (-1, 0), (0, -1)]
            for dir in dirs:
                new_r = cur_loc[0] + dir[0]
                new_c = cur_loc[1] + dir[1]
                if 0 <= new_r < row and 0 <= new_c < col and grid[new_r][new_c] == "1":
                    dfs(grid, (new_r, new_c))
        
        ans = 0
        for r in range(row):
            for c in range(col):
                if grid[r][c] == "1" and not visited[r][c]:
                    dfs(grid, (r, c))
                    ans += 1
        
        return ans

# Do not need to find the coordinate for island, just scan through the grid
# Do not need to initialize the visited array, can directly use grid
