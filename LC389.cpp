// Sum solution

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ssum = 0, tsum = 0;

        for(int i = 0; i < s.size(); i++){
            ssum += s[i];
            tsum += t[i];
        }
        tsum += t[t.size()-1];

        return tsum - ssum;
    }
};

//xor solution
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;

        for(int i = 0; i < s.size(); i++){
            c ^= s[i];
            c ^= t[i];
        }
        c ^= t[t.size()-1];

        return c;
    }
};
