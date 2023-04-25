class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        pos = -1
        mi = inf

        for i in range(len(points)):
            if x == points[i][0] or y == points[i][1]:
                d = abs(x - points[i][0]) + abs(y - points[i][1])
                if mi > d:
                    mi = d
                    pos = i
        
        return pos
