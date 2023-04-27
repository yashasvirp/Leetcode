class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        m = len(word1)
        n = len(word2)
        s = ""
        i = 0
        j = 0

        while i < m or j < n:
            if i < m:
                s += word1[i]
                i += 1
            
            if j < n:
                s += word2[j]
                j += 1
        
        return s
