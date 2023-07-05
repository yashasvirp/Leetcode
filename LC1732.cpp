class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int m = 0, s = 0;

        for(int i = 0; i < nums.size(); i++){
            s += nums[i];
            m = max(m ,s);
        }

        return m;
    }
};
