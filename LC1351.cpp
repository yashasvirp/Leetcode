class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = 0, n = grid[0].size();
        
        for(auto row : grid){
            int h = upper_bound(row.begin(), row.end(), 0, greater<int>()) - row.begin();
            c += n - h;
        }

        return c;
    }
};
