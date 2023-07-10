class Solution {
public:
    string decodeString(string s) {
        stack <char> st;
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] != ']')
                st.push(s[i]);
            
            else{

                string str = "";
                while(st.top() != '['){
                    str = st.top() + str;
                    st.pop();
                }
                st.pop();

                string num = "";
                while(!st.empty() and isdigit(st.top())){
                    num = st.top() + num;
                    st.pop();
                }
                int x = stoi(num);
                
                while(x--)
                    for(int j = 0; j < str.size(); j++)
                        st.push(str[j]);

            }
        }

        string res = "";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }

        return res;
        
    }
};
