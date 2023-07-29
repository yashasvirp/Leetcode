class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int o = 0, e = 0;
        
        for(auto i : pos)
            if(i%2)
                o++;
            else
                e++;
        
        return min(o,e);
    }
};
