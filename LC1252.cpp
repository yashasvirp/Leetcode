class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        int c = 0;

        vector<vector<int>> v(m,vector<int>(n,0));

        for(auto ind : indices){
            for(int i = 0; i < n; i++)
                v[ind[0]][i]++;
            
            for(int i = 0; i < m; i++)
                v[i][ind[1]]++;
        }

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                c += (v[i][j]%2 ? 1 : 0);

        return c;
    }
};
