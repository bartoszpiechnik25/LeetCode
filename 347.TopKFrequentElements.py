# We can also use 'from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
#       Alternatively occur = Counter(nums)
        occur = {}
        for number in nums:
            if number not in occur:
                occur[number] = 1
            else:
                occur[number] += 1
        return [number for number, occurence in sorted(occur.items(),key=lambda item: item[1], reverse=True)[:k]]
