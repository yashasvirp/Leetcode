class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0, n = s.size(), j;

        while(i < n){
            if(s[i] == ' ')
                i++;
            else{
                j = i;
                while(j < n and s[j] != ' ')
                    j++;
                string temp = s.substr(i,j-i);

                if(ans == "")
                    ans = temp;
                else
                    ans = temp + " " + ans;
                i = j;
            }
        }

        return ans;

    }
};
