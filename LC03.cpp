class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, n = s.size(), len = 0;
        unordered_map <char, int> m;
        bool flag;

        for(int r = 0; r < n; r++){
            m[s[r]]++;

            while(m[s[r]] > 1){
                m[s[l++]]--;
            }

            len = max(len, r - l + 1);
        }

        return len;
    }
};
