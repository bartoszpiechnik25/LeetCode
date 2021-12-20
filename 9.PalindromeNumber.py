class Solution:
    def isPalindrome(self, x: int) -> bool:
        number = str(x)
        backwards = number[::-1]
        if backwards == number:
            return True
        else:
            return False