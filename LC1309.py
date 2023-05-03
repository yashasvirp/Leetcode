class Solution:
    def freqAlphabets(self, s: str) -> str:
        i = 0
        l = len(s)
        res = ''

        while i < l:

            if i+2 < l and s[i+2] == '#':
                c = ord('a') + int(s[i])*10 + int(s[i+1]) - 1
                i += 3
            else:
                c = ord('a') + int(s[i]) - 1
                i += 1
            
            res += chr(c)


        return res


# Another approach

class Solution:
    def freqAlphabets(self, s: str) -> str:
        d = []

        for i in range(1,27):
            v = chr(96 + i)
            if 1 <= i < 10:
                d.append([str(i), v])
                continue
            r = f"{i}#"
            d.append([r, v])
        
        res = s

        for k,v in d[::-1]:
            res = res.replace(k,v)
        
        return res
