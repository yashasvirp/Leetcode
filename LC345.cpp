class Solution {
public:
    bool vowel(char i){
        return i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'
            || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U';
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;

        while(i < j){
            while(i < s.size() and !vowel(s[i]))
            i++;

            while(j >= 0 and !vowel(s[j]))
            j--;

            if(i < j)
                swap(s[i++], s[j--]);
        }

        return s;
    }
};
