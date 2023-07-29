class Solution:
    def minCostToMoveChips(self, pos: List[int]) -> int:
        o = sum(i%2 for i in pos)
        return min(o, len(pos) - o)
