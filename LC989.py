class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        i = len(num) - 1
        l = []
        
        while i >= 0 or k > 0:
            if i >= 0:
                k += num[i]
    
            l.insert(0, k%10)
            k //= 10
            i -= 1
        
        return l
