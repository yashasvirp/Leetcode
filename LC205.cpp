class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a = s.size(), b = t.size();
        if(a != b)
            return false;
        
        unordered_map <char, char> m1, m2;

        for(int i = 0; i < a; i++){
            if(m1.find(s[i]) != m1.end() || m2.find(t[i]) != m2.end()){  //char already exists in the map
                if(m1[s[i]] != t[i] || m2[t[i]] != s[i])
                    return false;
            }
            else{
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
        }
        
        return true;
    }
};
