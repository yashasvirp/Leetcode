class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int>, int> row, col;
        int count = 0, n = grid.size();
        for(auto i : grid)
            row[i]++;
        
        for(int i = 0; i < n; i++){
            vector<int> v (n,0);
            for(int j = 0; j < n; j++)
                v[j] = grid[j][i];
            col[v]++;
        }

        for(auto i : row){
            if(col.find(i.first) != col.end())
                count += row[i.first] * col[i.first]; 
        }

        return count;
    }
};
