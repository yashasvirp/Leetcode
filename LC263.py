class Solution:
    def isUgly(self, n: int) -> bool:

        if n <= 0:
            return False
            
        def divide(a, b):
            while a % b == 0:
                a //= b

            return a
        
        for i in (2,3,5):
            n = divide(n, i)
        
        return n == 1
