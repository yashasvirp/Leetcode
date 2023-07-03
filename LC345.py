class Solution:
    def reverseVowels(self, s: str) -> str:
        s = list(s)
        vowel = ['a', 'e', 'i', 'o','u']
        i = 0
        j = len(s) - 1

        while i < j:

            while i < len(s) and s[i].lower() not in vowel:
                i += 1
            
            while j >= 0 and s[j].lower() not in vowel:
                j -= 1
            
            if i < j:
                s[i], s[j] = s[j], s[i]
                i += 1
                j -= 1
            
        return "".join(s)
