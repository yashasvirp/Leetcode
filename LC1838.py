class Solution:
    def maxFrequency(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)
        ssw = nums[0]
        freq = 1
        i = 0
        for j in range(1,n):
            ssw += nums[j]
            mx = nums[j]
            while ssw + k < mx * (j - i + 1):
                ssw -= nums[i]
                i += 1
            freq = max(freq, j - i + 1)
        return freq
