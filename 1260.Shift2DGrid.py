class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(grid), len(grid[0])
        new = [[0]*n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                num_1 = (j+k)%n
                num_2 = (i+(j+k)//n) % m
                new[num_2][num_1] = grid[i][j]
        return new
