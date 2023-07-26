class Solution {
public:
    int getcount(int n){
        int c = 0;
        while(n> 0){
            n/= 10;
            c++;
        }
        return c;
    }

    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(auto i : nums)
            if(!(getcount(i)%2))
                c++;
        
        return c;
    }
};
