class Solution:
    def countBits(self, n: int) -> List[int]:
        return [int(bin(nums).count('1')) for nums in range(n+1)]
