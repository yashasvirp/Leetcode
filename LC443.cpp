class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, n = chars.size(), p = 0;
        
        while(i < n){
            int count = 0;
            char k = chars[i];
            while(i < n and chars[i] == k){
                i++;
                count++;
            }

            chars[p++] = k;
            
            if(count > 1)
                for(char c : to_string(count))
                    chars[p++] = c;
        }

        return p;
    }
};
