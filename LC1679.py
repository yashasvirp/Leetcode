class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        c = 0
        nums.sort()
        l = 0
        h = len(nums) - 1

        while l < h:
            t = nums[l] + nums[h]

            if t == k:
                c += 1
                h -= 1
                l += 1
            elif t > k:
                h -= 1
            else:
                l += 1
        
        return c
