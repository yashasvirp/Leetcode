class Solution:
    def romanToInt(self, s: str) -> int:
        ans = 0
        d = {'I':1,'X':10,'V':5,'L':50,'C':100,'D':500,'M':1000}
        
        for i in range(len(s)):
            if i < len(s)-1 and d[s[i]] < d[s[i+1]]:
                ans -= d[s[i]]
            else:
                ans += d[s[i]]

        return ans
