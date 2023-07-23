class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size(), count = 0;
        vector<int> res(nums);
        map <int, int> m;

        sort(res.begin(), res.end());

        for(int i = 0; i < n; i++){
            if(m.find(res[i]) ==  m.end())
                m[res[i]] = i;
        }

        for(int i = 0; i < n; i++)
            res[i] = m[nums[i]];

        return res;
    }
};
