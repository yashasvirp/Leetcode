class Solution {
public:
    
    int minEatingSpeed(vector<int>& piles, int h) {

        int l = 1, ht = 1000000000;
        
        while(l < ht){
            int k = l + (ht-l)/2, t = 0;
            for(int i : piles)
                t += (i + k - 1)/k;
            if(t <= h)
                ht = k;
            else
                l = k + 1;
        }

        return l;
    }
};
