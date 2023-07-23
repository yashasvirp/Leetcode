class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0, j = n, k = 0;
        vector<int> res (2*n, 0);

        while(k < 2*n){
            res[k++] = nums[i++];
            res[k++] = nums[j++];
        }

        return res;
    }
};
