class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        c = 0

        for i in range(len(s)):
            c ^= ord(s[i])
            c ^= ord(t[i])
        
        c ^= ord(t[-1])
        return chr(c)
