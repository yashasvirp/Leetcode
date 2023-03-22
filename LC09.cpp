/*
Given an integer x, return true if x is a palindrome, and false otherwise.

(Even negative numbers are considered not palindromes)
 */


class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0, rem, p = x;

        if(x < 0)
            return false;

        while(x != 0){
            rem = x%10;
            rev = rev*10 + rem;
            x = x/10;
        }
        
        if(rev == p)
            return true;
        
        return false;
    }
};
