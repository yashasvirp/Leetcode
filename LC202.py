class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()

        while n != 1:
            sum = 0

            while n:
                p = n%10
                sum += p**2
                n //= 10
            
            if sum in  s:
                return False
            s.add(sum)
            n = sum
        
        return True
