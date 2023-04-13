class Solution {
public:
    int firstUniqChar(string s) {
        
        vector <int> v(26,0);

        for(auto i : s)
            v[i-'a']++;

        for(auto i:s)
            if(v[i-'a'] == 1)
                return s.find(i);
        
        return -1;
        
    }
};
