class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int low = 0, high = matrix.size()-1;

        while(low <= high){
            int mid = (low+high)/2;

            if(target == matrix[mid][0])
                return true;
            
            if(target > matrix[mid][0])
                low = mid + 1;
            else 
                high = (mid - 1);
        }

        int row = min(low, high) < 0 ? 0 : min(low,high);

        low = 0; high = matrix[0].size()-1;

        while(low <= high){
            int mid = (low+high)/2;

            if(target == matrix[row][mid])
                return true;
            if(target > matrix[row][mid])
                low = mid+1;
            else 
                high = mid-1;
        }

        return false;

    }
};
