class Solution:
    def canJump(self, nums: List[int]) -> bool:
        m = 0
        n = len(nums)

        for i in range(n):
            if i > m:
                return False
            
            m = max(m, i + nums[i])
            if m >= n-1:
                return True
        
        return True
