class Solution:
    def spiralOrder(self, mat: List[List[int]]) -> List[int]:
        l = 0
        r = len(mat[0]) - 1
        t = 0
        b = len(mat) - 1
        res = []

        while l < r and t < b:
            for i in range(l,r):
                res.append(mat[t][i])

            for i in range(t,b):
                res.append(mat[i][r])
            
            for i in range(r,l,-1):
                res.append(mat[b][i])
            
            for i in range(b,t,-1):
                res.append(mat[i][l])
            
            l += 1; r -= 1
            t += 1; b -= 1
        
        if l == r:
            while t <= b:
                res.append(mat[t][r])
                t += 1
        
        if t == b:
            while l <= r:
                res.append(mat[b][l])
                l += 1
        
        return res
