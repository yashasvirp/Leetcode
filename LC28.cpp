class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i = 0, j = 0, pos = -1;
        int l1 = haystack.size(), l2 = needle.size();

        if(l1 < l2)
            return -1;

        while(i < l1){

            while(haystack[i] != needle[j] && i < l1)
                i++;
            
            if(i == l1)
                break; //exit and pos = -1
            
            pos = i;
            while(haystack[i] == needle[j] && i < l1 && j < l2){
                i++; j++;
            }

            if(j == l2)
                return pos;
            
            j = 0;
            i = pos + 1;
            pos = -1;
        }

        return pos;
    }
};

//Another solution

class Solution {
public:
    int strStr(string haystack, string needle) {
            return haystack.find(needle);
    }
};
