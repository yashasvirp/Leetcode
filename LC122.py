class Solution:
    def maxProfit(self, p: List[int]) -> int:
        m = 0
        n = len(p)

        for i in range(1,n):
            if p[i] > p[i-1]:
                m += p[i] - p[i-1]
        
        return m
