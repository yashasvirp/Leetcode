class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        n = 3

        r = [0]*n
        c = [0]*n

        d1 = 0; d2 = 0; curr = 1

        for i in moves:
            r[i[0]] += curr
            c[i[1]] += curr

            d1 = d1 + curr if i[0] == i[1] else d1
            d2 = d2 + curr if i[0] + i[1] == n-1 else d2

            if abs(r[i[0]]) == n or abs(c[i[1]]) == n or abs(d1) == n or abs(d2) == n:
                return "A" if curr == 1 else "B"
            
            curr *= -1

        return "Pending" if len(moves) < 9 else "Draw"
