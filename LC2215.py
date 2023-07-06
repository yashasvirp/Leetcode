class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        return [set(nums1) - set(nums2), set(nums2) - set(nums1)]


# Another method

class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        s1 = set(nums1)
        s2 = set(nums2)
        res = []
        l = []

        for i in s1:
            if i not in s2:
                l.append(i)
        
        res.append(l)
        l = []

        for i in s2:
            if i not in s1:
                l.append(i)
        
        res.append(l)

        return res
