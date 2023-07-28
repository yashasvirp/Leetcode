class Solution:
    def luckyNumbers (self, mat: List[List[int]]) -> List[int]:
        row = {min(r) for r in mat}
        col = {max(c) for c in zip(*mat)}

        return list(row & col)  # more of an intersection
