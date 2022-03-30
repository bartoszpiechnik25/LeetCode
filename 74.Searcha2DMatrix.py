class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
            if target > matrix[-1][-1]:
                return False
            size = len(matrix)
            for i in range(size):
                if (target >= matrix[i][0]) and (target <= matrix[i][-1]):
                    if target in matrix[i]:
                        return True
            return False
