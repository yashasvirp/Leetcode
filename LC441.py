class Solution:
    def arrangeCoins(self, n: int) -> int:
        if n == 1:
            return n
        
        l = 1
        h = n

        while l <= h:
            m = (l+h)//2
            k = m*(m+1)//2

            if k == n:
                return m
            
            if k > n:
                h = m - 1
            else:
                l = m + 1
        
        return h
