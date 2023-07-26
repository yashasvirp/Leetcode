class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int k, c = 0;

        if(ruleKey == "type")
            k = 0;
        else if(ruleKey == "color")
            k = 1;
        else
            k = 2;

        for(auto i : items)
            if(i[k] == ruleValue)
                c++;
        
        return c;
    }
};
