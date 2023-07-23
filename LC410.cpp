class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = 0;
        int h = 0;
        
        for(auto i : nums){
            h += i;
            l = max(l,i);
        }

        while(l < h){
            int m = l + (h-l)/2;
            int s = 0, p = 1;

            for(auto i : nums){
                if(s + i > m){
                    s = i;
                    p++;
                }
                else
                    s += i;
            }

            if(p <= k)
                h = m;
            else
                l = m + 1;
        }

        return h;
    }
};
