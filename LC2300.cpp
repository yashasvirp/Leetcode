class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long k) {
        int n = p.size(), j = 0;
        sort(p.begin(), p.end());

        vector<int> v (s.size(), 0);

        for(auto i : s){
            int l = 0, h = n-1;
            while(l <= h){
                int m = l + (h-l)/2;

                long long t = (long long)i * (long long)p[m];

                if(t >= k)
                    h = m - 1;
                else
                    l = m + 1;
            }

            v[j++] = n - l;
        }

        return v;
    }
};
