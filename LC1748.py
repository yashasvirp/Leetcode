class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        d = {}

        for i in nums:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        
        return sum(i for i in d if d[i] == 1)
