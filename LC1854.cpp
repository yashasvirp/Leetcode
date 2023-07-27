class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> yr (2051, 0);

        for(auto i : logs){
            yr[i[0]]++;
            yr[i[1]]--;
        }
        int cnt = yr[1950], early = 1950;

        for(int i = 1951; i < 2051; i++){
            yr[i] += yr[i-1];           // Prefix sum

            if(yr[i] > cnt){
                cnt = yr[i];
                early = i;
            }
        }

        return early;
    }
};
