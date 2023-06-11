class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";

        int m = strs[0].size();

        for(auto i : strs)      // find minimum sized string
            if(i.size() <= m)
                m = i.size();
        
        for(int j = 0; j < m; j++){
            bool flag = true;

            for(int i = 0; i < strs.size() - 1; i++)
                if(strs[i][j] != strs[i+1][j]){
                    return s;
                }

            if(flag)
                s.push_back(strs[0][j]);
        }

        return s;

    }
};

// Another approach

/* Sort the array - it makes sure the first and last strings have the common prefix that all other strings have

   Then compare only first and last strings to check for prefix */


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";

        sort(strs.begin(), strs.end());

        string f = strs[0], l = strs[strs.size()-1];
        int m = min(f.size(), l.size());

        for(int i = 0; i < m; i++)
            if(f[i] != l[i])
                return s;
            else
                s.push_back(f[i]);

        
        return s;

    }
};
