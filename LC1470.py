class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        i = 0
        j = n
        k = 0
        res =[0]*(2*n)

        while k < 2*n:
            res[k] = nums[i]
            k += 1; i += 1
            res[k] = nums[j]
            k += 1; j += 1
        
        return res
