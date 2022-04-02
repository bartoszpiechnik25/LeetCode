class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        def factorial(self, n):
            if n < 2:
                return 1
            ans = 1
            for i in range(1, n+1):
                ans *= i
            return ans
        def element(self, n, k):
            if k == 0:
                return 1
            return factorial(self, n) // (factorial(self, k) * factorial(self, n-k))
        return [element(self, rowIndex, i) for i in range(rowIndex+1)]
