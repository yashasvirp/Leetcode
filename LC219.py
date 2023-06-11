class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        d = {}

        for idx, val in enumerate(nums):
            if val in d and idx-d[val] <= k:
                return True
            d[val] = idx
        
        return False
