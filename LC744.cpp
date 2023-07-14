class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, n = letters.size();
        int h = n-1;

        if(target >= letters[h])
            return letters[0];

        while(l <= h){
            int  m = l + (h-l)/2;
            if(target >= letters[m])
                l = m + 1;
            else
                h = m - 1;
        }

        return letters[l];
    }
};
