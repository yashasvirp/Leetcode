class Solution {
public:
    void sortColors(vector<int>& nums) {
        int v[3] = {0,0,0};
        

        for(auto i : nums)
            v[i]++;
        
        int i = 0, j = 0;

        while(i < nums.size()){
            while(v[j]){
                nums[i++] = j;
                v[j]--;
            }
            j++;
        }

        //return nums;
    }
};
