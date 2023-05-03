class Solution {
public:
    bool isHappy(int n) {
        if(n > 1 && n < 4)
            return false;

        map <int, bool> m;
        int sum;

        while(n != 1){
            sum = 0;
            while(n){
                int p = n%10;
                sum += p*p;
                n = n/10;
            }
            
            if(m.count(sum))
                return false;
            else
                m[sum] = true;
            
            n = sum;
        }

        return true;
    }
};
