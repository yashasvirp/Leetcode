class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num == 1:
            return num
        
        l = 1
        h = num//2

        while l <= h:
            m = (l+h)//2

            if m*m == num:
                return True
            
            if m*m > num:
                h = m - 1
            else:
                l = m + 1
        
        return False
