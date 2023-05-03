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
