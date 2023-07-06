class Solution:
    def kidsWithCandies(self, nums: List[int], ex: int) -> List[bool]:

        m = 0
        l = []

        for i in nums:
            m = max(m, i)

        for i in nums:
            if i + ex >= m:
                l.append(True)
            else:
                l.append(False)
        
        return l
        
