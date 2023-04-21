class Solution:
    def average(self, salary: List[int]) -> float:
        mi = inf
        ma = -inf
        sum = 0

        for i in salary:
            sum += i
            mi = min(mi, i)
            ma = max(ma, i)
        
        return (sum - mi - ma)/(len(salary)-2)
