class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int r, int c) {
        vector< vector<int> > res = {{r, c}};
        int dx = 0, dy = 1, temp;

        for(int n = 0; res.size() < rows * cols; n++){
            for(int i =  0; i < n/2 + 1; i++){
                r += dx; c += dy;

                if(0 <= r && r < rows && 0 <= c && c < cols)
                    res.push_back({r,c});
            }
            temp = dx; dx = dy; dy =-temp;
        }

        return res;

    }
};
