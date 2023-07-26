class Solution:
    def checkIfPangram(self, sentence: str) -> bool:

        for i in range(26):
            c = chr(ord('a') + i)

            if sentence.find(c) == -1:
                return False

        return True
