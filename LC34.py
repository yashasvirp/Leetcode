class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l = [-1,-1]
        fi = -1
        la = -1
        lo = 0; h = len(nums) - 1

        # first occurence
        while lo <= h:
            m = (lo + h) // 2
            if nums[m] == target:
                fi = m
                h = m - 1
            elif nums[m] > target:
                h = m - 1
            else:
                lo = m + 1
        

        # last occurence
        lo = 0; h = len(nums) - 1

        while lo <= h:
            m = (lo + h) // 2

            if nums[m] == target:
                la = m
                lo = m + 1
            elif nums[m] < target:
                lo = m + 1
            else:
                h = m - 1
        
        l[0] = fi; l[1] = la

        return l
