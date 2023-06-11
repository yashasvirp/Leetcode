class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        for i in s:
            c = t.find(i)
            if c == -1:
                return False
            t = t[c+1:]
        
        return True
