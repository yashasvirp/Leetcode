class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long x = 1, y = 0;

        while(y < neededApples){
            x++;
            y = 2*x*(x-1)*(2*x-1);
        }

        return 8*(x-1);
    }
};
