class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        l = []

        for i in asteroids:
            while len(l) > 0 and l[-1] > 0 and i < 0:

                if abs(l[-1]) < abs(i):
                    l.pop()
                    continue
                
                if abs(l[-1]) == abs(i):
                    l.pop()
                
                break
            else:
                l.append(i)
        
        return l
