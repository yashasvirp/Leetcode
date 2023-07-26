class Solution:
    def getcount(self, n):
        c = 0

        while n > 0:
            n //= 10
            c += 1
        return c

    def findNumbers(self, nums: List[int]) -> int:
        return sum([self.getcount(i)%2 == 0 for i in nums])


# Another way

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return sum([len(str(i))%2 == 0 for i in nums])
        
