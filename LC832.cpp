class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& m) {
        int n = m.size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < (n+1)/2; j++){
                int temp = m[i][j]^1;
                m[i][j] = m[i][n - 1 - j]^1;
                m[i][n - j - 1] = temp;
            }

        return m;
    }
};
