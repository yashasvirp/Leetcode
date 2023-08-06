class Solution:
    def spiralMatrixIII(self, rows: int, cols: int, r: int, c: int) -> List[List[int]]:
        res = []
        dr, dc, n = 0, 1, 0
        
        while len(res) < rows * cols:
            for i in range(n//2 + 1):
                if 0 <= r < rows and 0 <= c < cols:
                    res.append([r,c])
                r += dr; c += dc
            
            dr, dc, n = dc, -dr, n+1
        
        return res

