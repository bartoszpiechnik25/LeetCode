class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        longest: str = ''
        for i in range(len(s)):
            j = i + 1
            while j < n:
                if s[i] == s[j]:
                    if (aux := s[i:j+1]) == aux[::-1]:
                        if len(aux) > len(longest):
                            longest = aux
                j += 1
        if longest == '':
            longest = s[0]
        return longest
