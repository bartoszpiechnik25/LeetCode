class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = [i for i in s.split(' ')[::-1] if i != '']
        return len(words[0])
