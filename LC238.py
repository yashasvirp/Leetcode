class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pre = [1]*n
        suf = [1]*n
        res = [1]*n
        i = 1; j = n-2; p1 = 1; p2 = 1

        while i < n and j > -1:
            p1 *= nums[i-1]
            p2 *= nums[j+1]
            pre[i] = p1
            suf[j] = p2
            i += 1
            j -= 1

        print(pre)
        print(suf)
        
        for i in range(n):
            res[i] = pre[i]*suf[i]
        
        return res
            
        
