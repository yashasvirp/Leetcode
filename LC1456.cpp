class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int cnt = 0;

        for(int i = 0; i < k; i++)
            if(isVowel(s[i]))
                cnt++;

        int m = cnt, i = k;

        while(i < s.length()){
            if(isVowel(s[i]))
                cnt++;
            if(isVowel(s[i-k]))
                cnt--;
            m = max(m, cnt);
            i++;
        }

        return m;
    }
};
