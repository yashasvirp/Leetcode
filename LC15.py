class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        l = []
        nums.sort()
        
        for i in range(n):

            if i == 0 or nums[i] != nums[i-1]:
                j = i + 1; k = n - 1

                while j < k:
                    tar = nums[j] + nums[k]

                    if tar == -nums[i]:
                        l.append([nums[i], nums[j], nums[k]])

                        while j < k and nums[j] == nums[j+1]:
                            j += 1
                        while j < k and nums[k] == nums[k-1]:
                            k -= 1
                        j += 1; k -= 1
                    elif tar < -nums[i]:
                        j += 1
                    else:
                        k -= 1
        
        return l

        
