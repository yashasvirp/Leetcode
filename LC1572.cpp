class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0, n = mat.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j || (i+j) == n-1)
                    sum += mat[i][j];
            }
        }

        return sum;
    }
};

// O(n) solution

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0, n = mat.size();

        for(int i = 0; i < n; i++){
            sum += mat[i][i];
            sum += mat[i][n-i-1]; //secondary diagonal : i+j = n-1 --> j = n-i-1
        }

        return sum - (n%2 == 0? 0 : mat[n/2][n/2]);
    }
};
