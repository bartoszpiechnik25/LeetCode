class Solution:
    def twoSum(self, nums: list, target: int) -> list:
        length = len(nums)
        for i in range(length):
            for j in range(i+1, length):
                if nums[i] + nums[j] == target:
                    ans = [i, j]
                    return ans

