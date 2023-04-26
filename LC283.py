class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # move to first zero place
        k = 0
        while k < len(nums):
            if not nums[k]:
                break
            k += 1
        
        i = k
        j = k+1

        while i < len(nums) and j < len(nums):
            if nums[j]:
                temp = nums[i]
                nums[i] = nums[j]
                nums[j] = temp
                i += 1
            
            j += 1
        
        return
