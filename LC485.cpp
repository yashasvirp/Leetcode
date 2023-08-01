class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, m = 0;

        for(auto i : nums)
            if(i)
                m = max(m, ++c);
            else
                c = 0;
        
        return m;
    }
};
