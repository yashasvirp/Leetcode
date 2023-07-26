class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        l = []

        for i,n in zip(index, nums):
            l.insert(i, n)
        
        return l
