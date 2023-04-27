class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        
        n = len(mat)
        sum = 0

        for i in range(n):
            sum += mat[i][i]
            sum += mat[i][n-i-1]
        
        return sum - (0 if n%2 == 0 else mat[n//2][n//2])
