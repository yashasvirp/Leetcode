class Solution:
    def merge(self, nums: List[List[int]]) -> List[List[int]]:
        i = 0
        n = len(nums)
        nums.sort()
        l = []

        while i < n:
            j = i
            lo = nums[i][0]
            h = nums[i][1]

            while j < n:
                if h < nums[j][0]:
                    break
                h = max(h, nums[j][1])
                j += 1
            
            l.append([lo,h])
            i = j
        
        return l
