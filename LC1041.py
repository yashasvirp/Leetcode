class Solution:
    def isRobotBounded(self, instructions: str) -> bool:
        x = 0
        y = 0
        i = 0

        d = [[0,1],[1,0],[0,-1],[-1,0]]

        for s in instructions:
            if s == 'R':
                i = (i+1)%4
            elif s == 'L':
                i = (i+3)%4
            else:
                x += d[i][0]
                y += d[i][1]
        
        return x == 0 and y == 0 or i > 0
