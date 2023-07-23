class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = 0;
        map <int, int> cnt;
        for(int i : nums)
            c += cnt[i]++;
        
        return c;
    }
};
