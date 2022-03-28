class Solution:
    def to_decimal(self, arr: list[int]) -> int:
        n = len(arr) - 1
        if len(arr) == 1:
            return arr[0]
        return (10**n)*arr[0] + self.to_decimal(arr[1:])
    
    def plusOne(self, digits: List[int]) -> List[int]:
        num = self.to_decimal(digits) + 1
        return [int(i) for i in str(num)]
