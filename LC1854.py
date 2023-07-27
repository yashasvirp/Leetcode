class Solution:
    def maximumPopulation(self, logs: List[List[int]]) -> int:
        yr = [0]*2051

        for i in logs:
            yr[i[0]] += 1
            yr[i[1]] -= 1

        cnt = yr[1950]; early = 1950

        for i in range(1951, 2051):
            yr[i] += yr[i-1]

            if yr[i] > cnt:
                cnt = yr[i]
                early = i
        
        return early
