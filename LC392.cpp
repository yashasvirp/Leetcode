class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, m = s.size(), n = t.size();

        while(i < m && j < n){ //only till subsequence
            if(t[j] == s[i])
                i++;
            j++;
        }

        if(i < m)
            return false;
        
        return true;
    }
};
