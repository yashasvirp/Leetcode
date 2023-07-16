class Solution {
public:
    int mySqrt(int x) {
        int s = 1, e = x/2;

        if(x == 1)
            return x;
        
        while(s <= e){
            int m = s + (e-s)/2;

            if(m == x/m)
                return m;
            
            if(m > x/m)
                e = m - 1;
            else
                s = m + 1;
        }

        return e;
    }
};
