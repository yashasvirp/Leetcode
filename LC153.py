class Solution:
    def findMin(self, nums: List[int]) -> int:

        p = -1
        l = 0; h = len(nums)-1

        while l < h:
            if l == h:
                return nums[l]
            
            m = (l + h)//2

            if m > l and nums[m-1] > nums[m]:
                p = m
                break

            if m < h and nums[m] > nums[m+1]:
                p = m + 1
                break
            
            if nums[m] < nums[l]:
                h = m - 1
            else:
                l = m + 1
        
        if p == -1:
            return nums[0]
        
        return nums[p]
            
