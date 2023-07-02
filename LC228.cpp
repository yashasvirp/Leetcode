class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i = 0, n = nums.size(); 

        vector<string> v;

        // if(n == 0)
        //     return v;

        // if(n == 1){
        //     v.push_back(to_string(nums[0]));
        //     return v;
        // }

        while(i < n){
            int j = i;
            
            while(j < n-1 and (nums[j+1] == 1 + nums[j]))
                j++;
            
            string s = "";

            if(i == j)
                s += to_string(nums[i]);
            else
                s += to_string(nums[i]) + "->" + to_string(nums[j]);
            
            v.push_back(s);
            i = j+1;
        }  

        return v;
    }
};
