class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        l = []
        i = 0
        n = len(nums)

        while i < n:
            j = i

            while j < n-1 and nums[j+1] == 1 + nums[j]:
                j += 1
            
            s = ""

            if  i == j:
                s += str(nums[i])
            else:
                s += str(nums[i]) + "->" + str(nums[j])
            
            l.append(s)
            i = j + 1
        
        return l
