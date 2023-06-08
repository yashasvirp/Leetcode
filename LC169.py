class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ele = None
        count = 0
        
        for i in nums:
            if not count:   # if count == 0
                ele = i
            
            count += 1 if i == ele else -1

        return ele
