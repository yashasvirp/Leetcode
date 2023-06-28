class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0
        j = len(nums)-1

        while i < j:
            t = nums[i] + nums[j]

            if t == target:
                return [i+1, j+1]
            elif t < target:
                i += 1
            else:
                j -= 1
        
        return []
