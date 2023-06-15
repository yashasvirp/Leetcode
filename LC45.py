class Solution:
    def jump(self, nums: List[int]) -> int:
        far = 0
        end = 0
        cnt = 0
        n = len(nums)

        for i in range(n-1):
            far = max(far, i + nums[i])

            if i == end:
                cnt += 1
                end = far
        
        return cnt
