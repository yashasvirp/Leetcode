class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map <char, string> m1;
        unordered_map <string, char> m2;
        vector<string> v;
        int i = 0, j = 0, n = p.size(), b = s.size();


        while(j < b){
            string st = "";
            while(isalnum(s[j]))
                st.push_back(s[j++]);
            v.push_back(st);
            j++;
        }

        if(v.size() != n) //number of words and pattern char are not same
            return false;

        while(i < n){
            // cout<<st<<"*";
            
            if(m1.find(p[i]) != m1.end() || m2.find(v[i]) != m2.end()){ //char exists already
                if(m1[p[i]] != v[i] || m2[v[i]] != p[i])
                    return false;
            }
            else{
                m1[p[i]] = v[i];
                m2[v[i]] = p[i];
            }
            i++; j++;
        }

        return true;
    }
};
