class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, h = num;

        if(num == 1)
            return true;

        while(l <= h){
            int m = l + (h-l)/2;

            if(1ll*m*m == num)
                return true;

            if(1ll*m*m > num)
                h = m-1;
            else
                l = m + 1;
        }

        return false;
    }
};
