class Solution:
    def comb(self, digits, d, s, res, cur):
        if cur == len(digits):
            res.append(s)
            return 
        
        for i in d[digits[cur]]:
            s += i
            self.comb(digits, d, s, res, cur+1)
            s = s[:-1]
        
        return 

    
    def letterCombinations(self, digits: str) -> List[str]:
        res = []

        if len(digits) == 0:
            return res
        
        d = {
            '2' : ['a', 'b', 'c'],
            '3' : ['d', 'e', 'f'],
            '4' : ['g', 'h', 'i'],
            '5' : ['j', 'k', 'l'],
            '6' : ['m', 'n', 'o'],
            '7' : ['p', 'q', 'r', 's'],
            '8' : ['t', 'u', 'v'],
            '9' : ['w', 'x', 'y', 'z']
        }

        s = ""

        self.comb(digits, d, s, res, 0)
        
        return res
