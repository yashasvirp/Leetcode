class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int ma = INT_MIN, mi = INT_MAX;
        
        for(auto i : salary){
            if(i > ma)
                ma = i;
            if(i < mi)
                mi = i;
            sum += i;
        }

        return (double)(sum - ma - mi)/(double)(salary.size()-2);
    }
};
