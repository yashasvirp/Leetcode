class Solution:
    def delX(self,a,b):
        return a[0] - b[0]
    
    def delY(self,a,b):
        return a[1] - b[1]
    
    def checkStraightLine(self, pts: List[List[int]]) -> bool:

        dX = self.delX(pts[0],pts[1])
        dY = self.delY(pts[0],pts[1])

        for i in range(2,len(pts)):
            if dX * self.delY(pts[i],pts[0]) != dY * self.delX(pts[i],pts[0]):
                return False
        
        return True
