class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ele;

        for(auto i : nums){
            if(!count)
                ele = i;
            count += (i == ele)? 1 : -1;
        }
        
        return ele;
    }

};
