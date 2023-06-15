class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,1), pre(n,1), suf(n,1);
        int p1 = 1, p2 = 1;

        for(int i = 1, j = n-2; i < n-1, j > -1; i++, j--){
            p1 *= nums[i-1];
            p2 *= nums[j+1];
            pre[i] = p1;
            suf[j] = p2;
        }

        for(int i = 0; i < n; i++)
            // cout<<pre[i]<<" "<<suf[i]<<" | ";
            v[i] = pre[i]*suf[i];

        return v;
    }
};
