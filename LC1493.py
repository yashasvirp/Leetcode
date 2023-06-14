class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        i = 0
        n = len(nums)
        cnt = 0
        win = 0

        for j in range(n):
            cnt += nums[j] == 0

            while cnt > 1:
                cnt -= nums[i] == 0
                i += 1
        
            win = max(win, j - i)

        return win
