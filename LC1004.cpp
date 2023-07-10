class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, n = nums.size();

        for(;j < n; ++j){
            if(!nums[j])
                k--;
            if(k < 0 and nums[i++] == 0)
                k++;
        }

        return j-i;
    }
};
