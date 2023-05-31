class Solution:
    def addBinary(self, a: str, b: str) -> str:
        c = 0
        n = len(a) - 1
        m = len(b) - 1
        s = ""

        while n >= 0 or m >= 0 or c:
            if n >= 0:
                c += int(a[n])
                n -= 1
            if m >= 0:
                c += int(b[m])
                m -= 1
            if c%2:
                s += '1'
            else:
                s += '0'
            c //= 2
        
        return s[-1::-1]
            
