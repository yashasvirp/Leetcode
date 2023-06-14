class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // we do it by counting number of zeroes
        
        int i = 0, n = nums.size(), count = 0, win = 0;

        for(int j = 0; j < n; j++){
            count += nums[j] == 0;

            while(count > 1)
                count -= nums[i++] == 0;
            
            win = max(win, j - i);   
        }

        return win;
    }
};
