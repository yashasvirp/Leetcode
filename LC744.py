class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        l = 0; n = len(letters)
        h = n - 1

        if target >= letters[h]:
            return letters[0]
        
        while l <= h:
            m = l + (h-l)//2
            if target >= letters[m]:
                l = m + 1
            else:
                h = m - 1
        
        return letters[l]
