class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int> res, v1, v2;

        for(int i = 0; i < mat.size(); i++){
            int m = mat[i][0];
            
            for(int j = 1; j < mat[i].size(); j++)
                m = min(m, mat[i][j]);
            
            v1.push_back(m);
        }

        for(int i = 0; i < mat[0].size(); i++){
            int m = mat[0][i];
            
            for(int j = 1; j < mat.size(); j++)
                m = max(m, mat[j][i]);
            
            v2.push_back(m);
        }

        for(auto i : v1){
            for(auto j : v2)
                if(i == j)
                    res.push_back(i);
        }

        return res;
    }
};
