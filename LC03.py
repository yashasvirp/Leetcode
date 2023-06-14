class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0; r = 0
        d = Counter()
        n = len(s)
        ans = 0

        while r < n:
            d[s[r]] += 1
            
            while d[s[r]] > 1:
                d[s[l]] -= 1
                l += 1
            
            ans = max(ans, r - l + 1)

            r += 1
        
        return ans
            
            
