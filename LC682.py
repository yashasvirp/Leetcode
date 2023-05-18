class Solution:
    def calPoints(self, s: List[str]) -> int:
        l = []

        for i in s:
            if i == "+":
                l.append(l[-1] + l[-2])
            elif i == "C":
                l.pop()
            elif i == "D":
                l.append(2*l[-1])
            else:
                l.append(int(i))
        
        return sum(l)
