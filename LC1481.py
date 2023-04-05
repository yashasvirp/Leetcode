class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        l = [nums[0]]

        for i in range(1,len(nums)):
            l.append(l[i-1]+nums[i])
        
        return l
