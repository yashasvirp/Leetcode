class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s = 0
        
        for i in range(k):
            s += nums[i]
        
        m = s
        i += 1
        while i < len(nums):
            s += nums[i] - nums[i-k]
            m = max(m, s)
            i += 1
        
        return m/k
