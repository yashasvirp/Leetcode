class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        l = s.split(" ")

        d1 = {}

        if len(l) != len(p):
            return False

        for i in range(len(p)):
            if p[i] in d1:
                if d1[p[i]] != l[i]:
                    return False
            elif l[i] in d1.values():
                return False
            else:            
                d1[p[i]] = l[i]
        
        return True
