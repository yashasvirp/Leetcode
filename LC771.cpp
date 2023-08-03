class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c = 0;
        
        for(auto i: stones){
            for(auto j : jewels)
                if(i == j)
                    c++;
        }

        return c;
    }
};
