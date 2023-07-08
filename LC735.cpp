class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;

        for(auto i : asteroids){
           int flag = 1;

           while(!st.empty() and (st.top() > 0 and i < 0)){
               //here flag = 1 when out of loop. Hence we push i
               if(abs(st.top()) < abs(i)){
                   st.pop();
                   continue;
               }

               if(abs(st.top()) == abs(i))
                    st.pop();
                
                // top > i, hence we don't push and do flag as 0
                flag = 0;
                
                //this break applies for when top >= 0. We don't push i then.
                break;
           }

           if(flag)
            st.push(i);
        }
        
        vector<int> v (st.size());
        
        int i = st.size()-1;
        while(!st.empty()){
            v[i] = st.top();
            st.pop();
            i--;
        }

        // reverse(v.begin(), v.end());
        return v;
    }
};
