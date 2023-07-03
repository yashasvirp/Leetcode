class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int i = 0, l = a.size();
        for(int i = 0; i < l; i++){
            if(!a[i]){
                bool left = (i == 0) || (a[i-1] == 0);
                bool right = (i == l-1) || (a[i+1] == 0);

                if(left and right){
                    a[i] = 1;
                    n--;
                    if(n <= 0)
                        return true;
                }
            }
        }

        return n <= 0;
    }
};
