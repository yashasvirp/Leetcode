class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1; ht = max(piles)

        while l < ht:
            k = l + (ht-l)//2
            if sum((p + k - 1)//k for p in piles) <= h:
                ht = k
            else:
                l = k + 1
        
        return l
        
