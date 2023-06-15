class Solution {
public:
    int jump(vector<int>& nums) {
        int cnt = 0, far = 0, end = 0, n = nums.size();

        for(int i = 0; i < n-1; i++){
            far = max(far, i + nums[i]);

            if(i == end){
                cnt++;
                end = far;
            }
        }

        return cnt;
    }
};
