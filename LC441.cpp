class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, h = n;

        while(l <= h){
            long long m = l + (h-l)/2;
            long long k = m*(m+1)/2;

            if(k == n)
                return (int)m;
            
            if(k > n)
                h = m - 1;
            else
                l = m + 1;
        }

        return h;
    }
};
