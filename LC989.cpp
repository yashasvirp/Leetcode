class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;
        vector<int> v;

        while(i >= 0 || k > 0){
            if(i >= 0)
                k += num[i];
            v.push_back(k%10);
            k /= 10;
            i--;
        }

        reverse(v.begin(), v.end());
        return v;
    }
};
