class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> m1;

        for(auto i : magazine)
            if(m1.count(i) == 0)
                m1[i] = 1;
            else
                m1[i]++;

        for(auto i : ransomNote)
            if(m1.count(i) != 0)
	      if(--m1[i] < 0)
		return false;
            else
                return false;
        
        return true;
    }
};

