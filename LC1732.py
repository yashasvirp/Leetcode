class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        s = 0
        m = 0

        for i in gain:
            s += i
            m = max(m, s)
        
        return m
