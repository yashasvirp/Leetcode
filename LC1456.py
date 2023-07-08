class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        v = {'a','e','i','o','u'}
        c = 0

        for i in range(k):
            c += int(s[i] in v)
        
        m = c

        for i in range(k, len(s)):
            c += int(s[i] in v) - int(s[i-k] in v)
            m = max(m,c)
        
        return m
        
