class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        a, length, max_diff = sorted(nums), len(nums), 0
        for i in range(length - 1):
            if (dif := a[i+1] - a[i]) > max_diff:
                max_diff = dif
        return max_diff
