class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        d = {}
        c = 0

        for i in nums:
            if i in d:
                c += d[i]
                d[i] += 1
            else:
                d[i] = 1
        
        return c
