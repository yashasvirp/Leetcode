class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double m = 0, i = 0, s = 0;
        
        for(i = 0; i < k; i++)
            s += nums[i];
        
        m = s;
        while(i < nums.size()){
            s += nums[i] - nums[i-k];
            m = max(m, s);
            i++;
        }

        return m/k;
    }
};
