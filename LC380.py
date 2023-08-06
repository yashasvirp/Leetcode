class RandomizedSet:

    def __init__(self):
        self.l = []
        self.d = {}

    def insert(self, val: int) -> bool:
        if val in self.l:
            return False
        
        self.l.append(val)
        self.d[val] = len(self.l) - 1
        return True

    def remove(self, val: int) -> bool:
        if val not in self.l:
            return False
        
        temp = self.l[-1]
        self.d[temp] = self.d[val]
        self.l[self.d[temp]] = temp
        self.d.pop(val)
        self.l.pop()
        return True       

    def getRandom(self) -> int:
        return random.choice(self.l)
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
