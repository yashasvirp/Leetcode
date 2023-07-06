class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int ex) {
        vector<bool> v (nums.size(), false);

        int m = 0;

        for(int i = 0; i < nums.size(); i++)
            m = max(m, nums[i]);
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] + ex >= m)
                v[i] = true;
        
        return v;
    }
};
