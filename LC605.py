class Solution:
    def canPlaceFlowers(self, a: List[int], n: int) -> bool:
        l = len(a)

        for i in range(l):
            if not a[i]:
                left = (not i) or (not a[i-1])
                right = (i == l - 1) or (not a[i+1])

                if left and right:
                    a[i] = 1
                    n -= 1
                    if n <= 0:
                        return True
        
        return n <= 0
