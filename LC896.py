class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        n = len(nums)

        if n < 3:
            return True
        
        inc = False
        de = False
        
        for i in range(n-1):
            if nums[i] > nums[i+1]:
                de = True
            if nums[i] < nums[i+1]:
                inc = True
            
            if inc and de:
                return False
        
        return True
