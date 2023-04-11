class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector <int> sq(nums);

        int l = 0, r = nums.size() - 1;

        for(int k = nums.size()-1; k >= 0; k--)
            if(abs(nums[l]) > abs(nums[r]))
                sq[k] = nums[l]*nums[l++];
            else
                sq[k] = nums[r]*nums[r--];        

        return sq;
    }

};
