class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int i = 0, n = nums.size();

        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
    
        while(i < n){
            int j = i, l = nums[i][0], h = nums[i][1];
            
            while(j < n){
                if(h < nums[j][0])
                    break;
                h = max(h,nums[j][1]);
                j++;
            }
            
            v.push_back({l,h});
            i = j;
        }

        return v;
    }
};
