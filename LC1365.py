class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        res = sorted(nums)
        d = {}
        
        for i in range(len(nums)):
            if res[i] not in d:
                d[res[i]] = i
        
        for i in range(len(nums)):
            res[i] = d[nums[i]]


        return res
