class Solution {
public:
    double myPow(double x, int n) {
        long long temp = n;
        double res = 1.0;

        if(n == 0)
            return 1;
        
        if(x == 0 || x == 1)
            return x;
        
        temp = temp > 0 ? temp : -1 * temp;

        while(temp)
        {
            if(temp & 1)
                res *= x;
            x *= x;
            temp >>= 1;
        }

        return n > 0 ? res : 1.0 / res;

    }
};
