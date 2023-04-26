class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& pts) {
        
        bool flag = true;

        for(int i = 0; i < pts.size()-1; i++) //all X coordinates are same or not
            if(pts[i][0] == pts[i+1][0] && flag)
                flag = true;
            else {
                flag = false;
                break;
            }
        
        if(flag) //if flag is true, all X coordinates are same and hence 
            return true;
        
        flag = true;
        for(int i = 0; i < pts.size()-1; i++) //all X coordinates are different or not
            if(pts[i][0] != pts[i+1][0] && flag)
                flag = true;
            else {
                flag = false;
                break;
            }

        if(!flag)  //some X are same, hence false
            return false;
        

        //At this point, all X should be different
        for(int i = 0; i < pts.size() - 2; i++){
                    
                    float m1 = (pts[i+1][1] - pts[i][1])/((pts[i+1][0] - pts[i][0]) * 0.1);
                    float m2 = (pts[i+2][1] - pts[i+1][1])/((pts[i+2][0] - pts[i+1][0]) * 0.1);
                    if(m1 != m2)
                        return false;
        }
        return true;
    }
};


//Another approach

class Solution {
public:
    int diffX(vector<int>a, vector<int> b){
        return a[0] - b[0];
    }

    int diffY(vector<int>a, vector<int> b){
        return a[1] - b[1];
    }

    bool checkStraightLine(vector<vector<int>>& pts) {
        
        int delX = diffX(pts[1], pts[0]); //diff of coordinates of pts[0][0] and pts[1][1] 
        int delY = diffY(pts[1], pts[0]); //diff of coord. of pts[0][1] nad pts[1][1]

        for(int i = 2; i < pts.size(); i++)
            if(delY*diffX(pts[i],pts[0]) != delX*diffY(pts[i],pts[0]))
                return false;

        return true;
    }
};
