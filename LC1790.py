class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:

        s3 = sorted(s1)
        s4 = sorted(s2)

        if s3 != s4:
            return False

        count = 0

        for i in range(len(s1)):
            if s1[i] != s2[i]:
                count += 1
        
        return True if count <= 2 else False
