// One solution
class Solution {
public:
    string addBinary(string a, string b) {
        if(a[0] == '0')
            return b;
        if(b[0] == '0')
            return a;

        char carry = '0';
        int n = a.size(), m = b.size();
        int len = abs(n-m);
        string temp (len,'0');

        if(n > m)
            b = temp + b;
        else
            a = temp + a;

        string s;
        cout<<a<<endl;
        cout<<b<<endl;
        int i = a.size() - 1;
        while(i >= 0){
            if(carry == '0'){
                if(a[i] == '0' && b[i] == '0')
                    s.push_back('0');
                else if(a[i] == '0' || b[i] == '0')
                    s.push_back('1');
                else {
                    s.push_back('0');
                    carry = '1';
                }
            }
            else{
                if(a[i] == '0' && b[i] == '0'){
                    s.push_back('1');
                    carry = '0';
                }
                else if(a[i] == '0' || b[i] == '0'){
                    s.push_back('0');
                    carry = '1';
                }
                else {
                    s.push_back('1');
                    carry = '1';
                }
            }
            i--;
        }
        
        if(carry == '1')
            s.push_back(carry);
        
        reverse(s.begin(), s.end());
        
        return s;
    }
};

//Another solution

class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
    }
};
