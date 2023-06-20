class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l = 0, n = a.size() - 1;
        int r = n;

        while(l <= r){
            int m = (l+r)/2;

            if((m == n || a[m] >= a[m+1]) and (m == 0 ||a[m] >= a[m-1]))
                return m;
            
            if(a[m] < a[m+1])
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }
};
