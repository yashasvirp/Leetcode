class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        i = 0; l = float('inf')
        n = len(nums)
        s = 0

        for j in range(n):
            s += nums[j]

            while s >= target:
                s -= nums[i]
                l = min(l, j - i + 1)
                i += 1
            
        return 0 if l == float('inf') else l

