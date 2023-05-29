class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
        int n = 3;
        
        if(moves.size() < 5)
            return "Pending";

        vector <int> r (n,0), c(n,0); 
        int d1 = 0, d2 = 0, curr = 1; // 1 -> A, -1 -> B

        for(auto i : moves){
            r[i[0]] += curr;
            c[i[1]] += curr;

            d1 = i[0] == i[1] ? d1 + curr : d1;
            d2 = i[0] + i[1] == n-1 ? d2 + curr : d2;

            if(abs(r[i[0]]) == n || abs(c[i[1]]) == n || (abs(d1) == n) || abs(d2) == n)
                return curr == 1? "A" : "B";

            curr *= -1;
        }
        
        return moves.size() < 9 ? "Pending" : "Draw";
    }
};
