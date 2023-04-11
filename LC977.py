class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:

        l = [0]*len(nums)

        left = 0
        r = len(nums)-1

        for k in range(len(nums)-1, -1, -1):
            if abs(nums[left]) > abs(nums[r]):
                l[k] = nums[left]**2
                left += 1
            else:
                l[k] = nums[r]**2
                r -= 1
            
        return l
