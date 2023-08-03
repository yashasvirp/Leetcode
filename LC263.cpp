class Solution {
public:
    int divide(int a, int b){
        while(a%b == 0)
            a /= b;
        
        return a;
    }

    bool isUgly(int n) {
        if(n <= 0)
            return false;

        for(auto i : {2, 3, 5})
            n = divide(n, i);
        
        return n == 1;
    }
};
