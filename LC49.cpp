class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector <string>> res;
        unordered_map <string, vector<string>> m;

        for(auto i : strs){
            string s = i;
            sort(i.begin(), i.end());
            m[i].push_back(s);
        }

        for(auto i : m)
            res.push_back(i.second);

        return res;
    }
};
