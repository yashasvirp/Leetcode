class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1(numRows);

        for(int i = 0; i < numRows; i++){
            
            v1[i].resize(i+1);
            v1[i][0] = v1[i][i] = 1;

            for(int j = 1; j < i; j++)
                v1[i][j] = v1[i-1][j-1] + v1[i-1][j];

        }

        return v1;
    }
};
