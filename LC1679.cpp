class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, h = nums.size()-1, count = 0;

        while(l < h){
            int tar = nums[l] + nums[h];

            if(tar == k){
                count++;
                l++;
                h--;
            }
            else if(tar > k)
                h--;
            else
                l++;
        }

        return count;
    }
};
