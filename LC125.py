class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = ""

        for i in s:
            if i.isalpha() or i.isnumeric():
                a += i.lower()
        print(a)
        return a == a[::-1]
