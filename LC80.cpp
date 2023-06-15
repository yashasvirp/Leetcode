class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n < 3){
            return n;
        }
        
        int i = 2, j = 2;

        while(j < n){
            if(nums[j] != nums[i-2])
                nums[i++] = nums[j];
            j++;
        }

        return i;
    }
};
