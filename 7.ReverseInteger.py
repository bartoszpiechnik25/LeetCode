class Solution:
    def reverse(self, x: int) -> int:
        number = int(str(abs(x))[::-1])
        if (number > pow(2,31)-1):
            return 0
        else:
            if x < 0:
                return -1*number
            return number
