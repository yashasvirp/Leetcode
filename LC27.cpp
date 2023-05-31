class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, l = nums.size();

        if(l == 1)
            if(nums[0] == val)
                return 0;
            else
                return l;
        
        while(i < l){

            while(i < l && nums[i] != val)
                i++;

            int j = i;
            while(j < l && nums[j] == val)
                j++;

            if(j >= l)
                break;

            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
        }

        return i;
    }
};

//Another solution

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, n = nums.size();

        for(int j = 0; j < n; j++)
            if(nums[j] != val)
                nums[i++] = nums[j];
        
        return i;
    }
};
