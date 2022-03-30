class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
                if target > matrix[-1][-1]:
                    return False
                n = len(matrix)
                values = [(matrix[i][0], matrix[i][-1], i) for i in range(n) if target <= matrix[i][-1]]
                for i, j, k in values:
                    if (target >= i) and (target <= j):
                        if target in matrix[k]:
                            return True
                return False
