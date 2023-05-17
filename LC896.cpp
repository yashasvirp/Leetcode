class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l = nums.size();

    if(l < 3)
        return true;
    
    bool in = false, de = false;

    for(int i = 0; i < l-1; i++){
        if(nums[i] > nums[i+1])
            de = true;
        if(nums[i] < nums[i+1])
            in = true;
        
        if(in && de)
            return false;
    }

    return true;
    }
};
