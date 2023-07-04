class Solution:
    def compress(self, chars: List[str]) -> int:
        i = 0
        res = 0
        n = len(chars)
        
        while i < n:

            k = chars[i]
            count = 0

            while i < n and chars[i] == k:
                count += 1
                i += 1
            
            chars[res] = k
            res += 1

            if count > 1:
                for j in str(count):
                    chars[res] = j
                    res += 1
        
        return res
