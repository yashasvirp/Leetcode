class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        d = {"type" : 0, "color" : 1, "name" : 2}
        
        c = 0

        for i in items:
            c += (1 if i[d[ruleKey]] == ruleValue else 0)
        
        return c
