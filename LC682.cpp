class Solution {
public:
    int calPoints(vector<string>& s) {

        stack <int> st;

        int n = s.size();

        for(int i = 0; i < n; i++){\

            if(s[i] == "+"){
                int a = st.top();
                st.pop();
                int res = a + st.top();
                //cout<<res;
                st.push(a);
                st.push(res);
            }

            else if(s[i] == "D")
                st.push(2*st.top());

            else if(s[i] == "C")
                st.pop();
            else
                st.push(stoi(s[i]));
        }

        int sum = 0;

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
