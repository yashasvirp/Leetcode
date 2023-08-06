class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        l = []

        for i in strs:
            s = i
            i = "".join(sorted(i))
            if i not in d:
                d[i] = [s]
            else:
                d[i].append(s)
        
        for i in d:
            l.append(d[i])
        
        return l
