class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)
            return n;
        
        int res = 0, a = 1, b = 2;

        for(int i = 2; i < n; i++){
            res = a + b;
            a = b;
            b = res;
        }

        return res;
    }
};
