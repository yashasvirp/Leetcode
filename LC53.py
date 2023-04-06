class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max = -inf
        sum = 0

        for i in nums:
            sum += i

            if sum > max:
                max = sum
            
            if sum < 0:
                sum = 0
        
        return max
