class Solution:
    def successfulPairs(self, s: List[int], p: List[int], k: int) -> List[int]:
        n = len(p)
        p.sort()
        v = []

        for i in s:
            l = 0; h = n-1

            while l <= h:
                m = l + (h-l)//2
                t = i * p[m]
                if t >= k:
                    h = m - 1
                else:
                    l = m + 1
                   
            v.append(n - l)

        return v
