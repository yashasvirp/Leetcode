class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;

        map <char, int> m;

        for(auto i : s){
            if(m.count(i) == 0)
                m[i] = 1;
            else
                m[i]++;
        }

        for(auto i : t){
	  if(m.count(i) == 0 || m[i] == 0) // if key doesn't exist or it is already 0 (extra character is in t)
                return false;
            else
                m[i]--;
        }

        
        return true;
    }
};
