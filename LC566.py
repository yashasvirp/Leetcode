class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if r*c != len(mat)*len(mat[0]):
            return mat

        n = len(mat[0])

        m = [[0]*c for _ in range(r)]

        for i in range(r*c):
            m[i//c][i%c] = mat[i//n][i%n]
        
        return m
