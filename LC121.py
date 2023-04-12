class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        min = inf
        max = -inf

        for i in prices:

            if i < min:
                min = i
            
            if max < (i - min):
                max = i - min
        
        if max < 0:
            return 0
        
        return max
