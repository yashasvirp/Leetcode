class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        l = max(nums)
        h = sum(nums)

        while l < h:
            m = (l + h)//2
            s = 0
            p = 1

            for i in nums:
                if s + i > m:
                    s = i
                    p += 1
                else:
                    s += i
            
            if p > k:
                l = m + 1
            else:
                h = m
            
        return h
