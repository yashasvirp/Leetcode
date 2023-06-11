class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        s = ""
        m = len(min(strs, key=len))
        
        for j in range(m):
            for i in range(len(strs)-1):
                if strs[i][j] != strs[i+1][j]:
                    return s
            s += strs[0][j]
        
        return s
            

# Another approach

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = ""

        strs.sort()
        f = strs[0]
        l = strs[-1]
        m = len(min((f, l), key = len))

        for i in range(m):
            if f[i] != l[i]:
                return s
            s += f[i]
        
        return s
