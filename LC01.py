'''
Two pair sum solution in Python. Description is given for the same file name in CPP branch of this repository.
'''

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        l = []

        for i in range(len(nums)):
            x = target - nums[i]
            if x in d:
                l.append(i)
                l.append(d[x])
            d[nums[i]] = i
        return l
