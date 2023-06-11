class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        d1 = {}
        
        for i in range(len(s)):
            if s[i] in d1:
                if d1[s[i]] != t[i]:
                    return False
            elif t[i] in d1.values():
                return False
            else:
                d1[s[i]] = t[i]

        
        return True
