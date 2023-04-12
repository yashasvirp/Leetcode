class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = INT_MIN;
        int sum = 0, min = INT_MAX;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min)
                min = prices[i];
            
            if(max < (prices[i] - min))
                max = prices[i] - min;
        }

        if(max < 0)
            return 0;
        
        return max;
    }
};
