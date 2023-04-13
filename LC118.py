class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l = []

        for i in range(0,numRows):
            l1 = [1]*(i+1)
            
            for j in range(1,i):
                l1[j] = l[i-1][j-1] + l[i-1][j]
            
            l.append(l1)

        return l
