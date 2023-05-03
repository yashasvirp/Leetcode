class Solution {
public:
    string freqAlphabets(string s) {
        int i = 0, l = s.length();
        string res;
        while(i < l){
            char c;
            if(i+2 < l && s[i+2] == '#'){
                c = 'a' + (s[i] - '0')*10 + (s[i+1] - '0') - 1;
                res.push_back(c);
                i += 3;
            }
            else{
                c = 'a' + (s[i] - '0') -1;
                res.push_back(c);
                i++;
            }
        }
        return res;
    }
};
