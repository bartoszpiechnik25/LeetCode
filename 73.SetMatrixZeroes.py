class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        zeroes, m, n = [], len(matrix), len(matrix[0])
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 0:
                    a = i, j
                    zeroes.append(a)
        for occ in zeroes:
            i, j = 0, 0
            while i != m:
                matrix[i][occ[1]] = 0
                i += 1
            while j != n:
                matrix[occ[0]][j] = 0
                j += 1
