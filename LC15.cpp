class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j, k, n = nums.size();
        
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){

            if(i == 0 || nums[i] != nums[i-1]){     // not considering duplicates;
                
                j = i+1; k = n-1;
                
                while(j < k){
                    if(nums[j] + nums[k] == -nums[i]){
                        res.push_back({nums[i], nums[j], nums[k]});
                        
                        //ignoring duplicates;
                        while(j < k and nums[j] == nums[j+1]) j++;
                        while(j < k and nums[k] == nums[k-1]) k--;
                        j++; k--;
                    }
                    else if(nums[j] + nums[k] < -nums[i])
                        j++;
                    else 
                        k--;
                }
            }
        }

        return res;

    }
};
