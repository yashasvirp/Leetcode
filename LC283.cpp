class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp, k = 0;

        while(k < nums.size())
            if(nums[k] == 0)
                break;
            else
                k++;

        int i = k, j = k+1;

        while(i < nums.size() && j < nums.size()){
            if(nums[j] != 0){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            j++;
        }

        return;
    }
};
