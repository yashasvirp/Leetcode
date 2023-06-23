class Solution {
public:
    int findMin(vector<int>& nums) {
        int p = -1, l = 0, h = nums.size()-1;

        while(l < h){

            if(l == h){
                p = l;
                break;
            }

            int m = (l+h)/2;

            if(m < h and nums[m+1] < nums[m]){
                p = m+1;
                break;
            }

            if(m > l and nums[m] < nums[m-1]){
                p = m;
                break;
            }

            if(nums[m] > nums[h])
                l = m + 1;
            else
                h = m - 1;
        }

        if(p == -1)
            return nums[0];
        
        return nums[p];
    }
};
