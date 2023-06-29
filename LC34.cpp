class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1, -1};

        int l = 0, h = nums.size()-1, first = -1, last = -1;

        // find target first
        while(l <= h){
            int m = (l+h)/2;

            if(nums[m] == target){
                first = m;
                h = m - 1;
            }
            else if(nums[m] < target)
                l = m + 1;
            else
                h = m - 1;
        }

        l = 0; h = nums.size()-1;
        
        while(l <= h){
            int m = (l+h)/2;

            if(nums[m] == target){
                last = m;
                l = m+1;
            }
            else if(nums[m] < target)
                l = m + 1;
            else
                h = m - 1;
        }
        
        v[0] = first;
        v[1] = last;
        return v;
    }
};
