class Solution:
    def minimumPerimeter(self, neededApples: int) -> int:
        x = 1
        y = 0

        while y < neededApples:
            x += 1
            y = 2*x*(x-1)*(2*x-1)
        
        return 8*(x-1)
