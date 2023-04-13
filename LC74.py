class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

        l = 0
        h = len(matrix) - 1

        while l <= h:
            m = (l+h)//2

            if target == matrix[m][0]:
                return True
            
            if target < matrix[m][0]:
                h = m - 1
            else:
                l = m + 1
        
        row = min(l,h) if min(l,h) > 0 else 0

        l = 0
        h = len(matrix[row]) - 1

        while l <= h:
            m = (l+h)//2

            if target == matrix[row][m]:
                return True
            
            if target < matrix[row][m]:
                h = m - 1
            else:
                l = m + 1
        
        return False
