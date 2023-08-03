class Solution {
public:
    int addDigits(int num) {
        if(num)
            return 1 + (num - 1)%9;
        
        return 0;
    }
};
