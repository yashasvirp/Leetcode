class Solution:
    def myPow(self, x: float, n: int) -> float:
        res = 1.0

        if n == 0:
            return 1
        
        if x == 0 or x == 1:
            return x
        
        temp = n if n > 0 else n*-1
        
        while temp:
            if temp & 1:
                res *= x
            x *= x
            temp >>= 1
        
        return res if n > 0 else 1.0/res
