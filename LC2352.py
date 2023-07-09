class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        c = 0
        n = len(grid)

        row = collections.Counter(tuple(i) for i  in grid)

        for i in range(n):
            col = [grid[j][i] for j in range(n)]
            c += row[tuple(col)]
        
        return c
