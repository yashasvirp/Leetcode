class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, c = 0;

        for(auto i : moves){
            if(i == 'U')
                r++;
            else if(i == 'D')
                r--;
            else if(i == 'L')
                c--;
            else
                c++;
        }

        return r == 0 && c == 0;
    }
};
