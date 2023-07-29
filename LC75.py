class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l = [0]*3

        for i in nums:
            l[i] += 1
        
        j = 0; i = 0
        while i < len(nums):
            
            while(l[j]):
                nums[i] = j
                i += 1
                l[j] -= 1
            
            j += 1
        
