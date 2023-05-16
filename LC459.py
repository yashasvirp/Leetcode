class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        t = s + s

        if t[1:len(t)-1].find(s) != -1:
            return True
        
        return False
