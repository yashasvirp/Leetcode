class Solution {
public:
    string intToRoman(int num) {
        vector< pair<int, string> > v {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        string res = "";
        for(int i = 0; i < v.size(); i++){
            
            while(num >= v[i].first){
                res += v[i].second;
                num -= v[i].first;
            }
        }

        return res;
    }
};

//Another plain implementation

class Solution {
public:
    string intToRoman(int num) {
        string o[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string t[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string h[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string th[] = {"", "M", "MM", "MMM"};

        return  th[num/1000] + h[(num%1000)/100] + t[(num%100)/10] + o[num%10];
    }
};
