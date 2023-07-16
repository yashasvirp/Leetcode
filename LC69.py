class Solution:
    def mySqrt(self, x: int) -> int:
        l = 1
        h = x//2
        
        if x == 1:
            return 1
        
        while l <= h:
            m = (l + h)//2
            
            if m == x//m:
                return m
            
            if m > x//m:
                h = m - 1
            else:
                l = m + 1
        
        return h
