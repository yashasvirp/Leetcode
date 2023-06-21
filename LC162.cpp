class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l = 0, n = a.size() - 1;
        int r = n;

        while(l <= r){
            int m = (l+r)/2;

            bool left = m-1 >= l and a[m] <= a[m-1];    // mid is lesser than left
            bool right = m+1 <= r and a[m] <= a[m+1];   // mid is lesser than right
            
            if(!left and !right)    // mid is peak
                return m;

            if(right)
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }
};
