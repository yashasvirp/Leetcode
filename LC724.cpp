class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum = 0, rsum = 0;

        for(auto i : nums)
            rsum += i;
        
        if(rsum - nums[0] == 0)
            return 0;

        for(int i = 1; i < nums.size(); i++){
            lsum += nums[i-1];
            
            if(lsum == rsum - (lsum + nums[i]))
                return i;
        }

        if(lsum == 0)
            return nums.size()-1;

        return -1;
    }
};
