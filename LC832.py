class Solution:
    def flipAndInvertImage(self, m: List[List[int]]) -> List[List[int]]:
        n = len(m)

        for i in range(n):    
            for j in range((n+1)//2):
                m[i][j], m[i][~j] = m[i][~j]^1, m[i][j]^1
        
        return m
        
