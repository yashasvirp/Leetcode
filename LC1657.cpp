class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size())
            return false;
        
        int f1[26] {}, f2[26] {}, n = word1.size();

        for(int i = 0; i < n; i++)
            f1[word1[i] - 'a']++;
        
        for(int i = 0; i < n; i++){
            int ind = word2[i] - 'a';
            f2[ind]++;
            if(f1[ind] == 0)
                return false;
        }

        sort(f1, f1 + 26);
        sort(f2, f2 + 26);

        for(int i = 0; i < 26; i++)
            if(f1[i] != f2[i])
                return false;
        
        return true;
    }
};
