class Solution:
    def findPeakElement(self, a: List[int]) -> int:
        l = 0
        r = n = len(a) - 1

        while l <= r:
            m = (l + r)//2

            left = (m-1) >= l and a[m] <= a[m-1]    # mid less than left
            right = (m+1) <= r and a[m] <= a[m+1]   # mid less than right
            
            if not left and not right:  # mid is peak
                return m

            if right:
                l = m + 1
            else:
                r = m - 1
        
        return -1
