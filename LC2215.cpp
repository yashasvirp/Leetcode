class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m1, m2;
        vector <vector<int>> res;

        for(auto i : nums1)
            m1[i] ++;

        for(auto i : nums2)
            m2[i]++;
        
        vector<int> v;
        for(auto i : m1){
            if(m2.find(i.first) == m2.end())
                v.push_back(i.first);
        }
        res.push_back(v);
        v.clear();

        for(auto i : m2)
            if(m1.find(i.first) == m1.end())
                v.push_back(i.first);
        
        res.push_back(v);

        return res;
    }
};
