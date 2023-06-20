class Solution:
    def findPeakElement(self, a: List[int]) -> int:
        l = 0
        r = n = len(a) - 1

        while l <= r:
            m = (l + r)//2

            if (m == 0 or a[m] >= a[m-1]) and (m == n or a[m] >= a[m+1]):
                return m
            
            if a[m] < a[m+1]:
                l = m + 1
            else:
                r = m - 1
        
        return -1
