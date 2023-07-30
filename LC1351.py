class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        def bsearch(arr):
            l, h = 0, len(arr)

            while l < h:
                m = (l + h)//2

                if arr[m] < 0:
                    h = m
                else:
                    l = m + 1
            
            return len(arr) - l
        
        c = 0
        for i in grid:
            c += bsearch(i)
        
        return c
