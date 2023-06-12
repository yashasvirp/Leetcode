class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        if(nums.size() == 1)
            return 1;
    
        int i = nums.size() - 1, p = k, freq = 0;

        int j = i, maxFreq = 0;

        sort(nums.begin(), nums.end());

        while(j > 0){
            while(j >= 0 and nums[i] == nums[j]){
                freq++;
                j--;
            }

            int temp = j;

            while(j >= 0 and nums[j] + p >= nums[i]){
                freq++;
                p -= (nums[i] - nums[j]);
                j--;
            }

            j = temp;
            i = j;

            maxFreq = (maxFreq < freq)? freq : maxFreq;
            freq = 0;
            p = k;
        }

        
        return maxFreq;
    }
};
