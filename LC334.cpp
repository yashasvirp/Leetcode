class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        if(nums.size() < 3)
            return false;
            
        int i = INT_MAX, j = INT_MAX;

        for(auto x : nums){
            if(x <= i)
                i = x;  // minimum element so far
            else if(x <= j) // implies x > min ele, and could be middle ele 
                j = x;  
            else        // implies x > min and x > mid, and still in loop, implying existence of third ele (k)
                return true;
        }

        return false;
    }
};
