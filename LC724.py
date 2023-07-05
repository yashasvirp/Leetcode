class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        lsum = 0
        rsum = 0

        rsum = sum(nums)
        
        if rsum - nums[0] == 0:
            return 0

        for i in range(1, len(nums)):
            lsum += nums[i-1]

            if lsum == rsum - (lsum + nums[i]):
                return i
        
        if lsum == 0:
            return len(nums) - 1
        
        return -1
