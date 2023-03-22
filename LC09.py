'''
Given an integer x, return true if x is a palindrome, and false otherwise.
'''
class Solution:
    def isPalindrome(self, x: int) -> bool:
        rev = 0
        p = x
        
        if x < 0:
            return False
        
        while x != 0:
            rem = x%10
            rev = rev*10 + rem
            x //= 10
        
        return (rev == p)
