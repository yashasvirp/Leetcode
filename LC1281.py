class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        p = 1
        s = 0

        while n:
            r = n % 10
            s += r
            p *= r
            n //= 10
        
        return p-s
