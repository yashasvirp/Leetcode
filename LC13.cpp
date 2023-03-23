/* 
Given a roman string, convert to integer

STRATEGY----
1. Store roman char and their integer values in a map. Create an integer variable "ans"
2. Traverse the  string and keep adding integers from map, to the variable "ans".
3. When encountered with variables like IV, XL, CM, the previous variable (I, X, C) will have been added already.
   So, we have to negate those values as well and add to the "ans": 
   eg: IV = 4 = 1(I) + 5(V) - 2 = 5 - 3 = 5 - 3*1 (also written like this) = 5(V) - 3*(I) will be added for value 4. 
   Which is equal to: if S[i] = V(5) and S[i-1] = I(1), then add: V - 3*I to "ans" only if s[i]/s[i-1] = V/I = 5/1 = 5. 
   For values like IX, CM, we get s[i]/s[i-1] = X/I = 10/1 = 10. For these, we have already I in the ans. So to negate that I, we have to add X and subtract 2 (10 - 2) which is 8, i.e., we have to add 8.
For XC, CM,  we have to add 80 and 800 respectively which is 8*(X) for XC, and 8*(C) for CM, i.e. 8*S[i-1] if S[i]/S[i-1] = 10.

Return "ans" once the loop is terminated.

TC - O(n), SC - O(1)
 */

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        map <char, int> m;

        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});

        ans += m[s[0]];
        for(int i = 1; i < s.size(); i++)
            if(m[s[i]] / m[s[i-1]] == 5)
                ans += 3*m[s[i-1]];
            else if(m[s[i]]/ m[s[i-1]] == 10)
                ans += 8*m[s[i-1]];
            else
                ans += m[s[i]];

        return ans;
    }
};
