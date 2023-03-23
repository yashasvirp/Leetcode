class Solution:
    def romanToInt(self, s: str) -> int:
        ans = 0
        d = {'I':1,'X':10,'V':5,'L':50,'C':100,'D':500,'M':1000}
        
        ans += d[s[0]]

        for i in range(1, len(s)):
            if d[s[i]] // d[s[i-1]] == 5:
                ans += 3*d[s[i-1]]
            elif d[s[i]] // d[s[i-1]] == 10:
                ans += 8*d[s[i-1]]
            else:
                ans += d[s[i]]

        return ans
