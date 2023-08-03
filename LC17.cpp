class Solution {
public:

    void comb(string &s, vector<string> &res, unordered_map<char, vector<char>> &m, string d, int curr){

        if(curr == d.size()){
            res.push_back(s);
            return;
        }


        for(auto i : m[d[curr]]){
            s.push_back(i);
            comb(s, res, m, d, curr+1);
            s.pop_back();
        }

        return;

    }


    vector<string> letterCombinations(string digits) {
        
        vector<string> res;

        if(digits == "")
            return res;

        unordered_map <char, vector<char>> m = {
            {'2',{'a', 'b', 'c'}},
            {'3',{'d', 'e', 'f'}},
            {'4',{'g', 'h', 'i'}},
            {'5',{'j', 'k', 'l'}},
            {'6',{'m', 'n', 'o'}},
            {'7',{'p', 'q', 'r', 's'}},
            {'8',{'t', 'u', 'v'}},
            {'9',{'w', 'x', 'y', 'z'}}
        };
        
        string s;
        comb(s, res, m, digits, 0);

        return res;
    }

};
