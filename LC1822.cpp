class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;

        for(auto i :nums){
            if(i == 0)
                return 0;
            
            if(i < 0)
                count++;
        }
    
        return count%2 == 0? 1 : -1;
    }
};
