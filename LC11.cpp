class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int m = 0, area = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            area = h * (j - i);
            m = max(m, area);

            if(height[i] < height[j])
                i++;
            else
                j--;
        }

        return m;
    }
};
