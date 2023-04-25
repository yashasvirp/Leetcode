class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;

        string s3(s1);
        sort(s3.begin(),s3.end());

        string s4(s2);
        sort(s4.begin(),s4.end());
        
        if(s3 != s4)
            return false;
        
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i])
                count++;
        }

        return count <= 2? true : false;
    }
};
