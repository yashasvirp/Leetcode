class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v (n, 0);
        int count = -n/2;
        for(int i = 0; i < n; i++){
            if(count == 0)
                count++;
            v[i] = count++;
        }
        
        if(n%2)
            v[n-1] = 0;
        
        return v;
    }
};
