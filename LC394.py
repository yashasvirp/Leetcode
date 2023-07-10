class Solution:
    def decodeString(self, s: str) -> str:
        st = []
        num = 0
        res = ""

        for i in s:
            if i.isdigit():
                num = num*10 + int(i)
            
            elif  i == '[':
                st.append(res)
                st.append(num)
                res = ""
                num = 0
            elif i == ']':
                pnum = st.pop()
                pres = st.pop()
                res = pres + pnum*res
            else:
                res += i

        return res
        
