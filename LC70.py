class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n 

        a, b, res = 1, 2, 0
        
        for _ in range(2,n):
            res = a + b
            a = b
            b = res
        
        return res
