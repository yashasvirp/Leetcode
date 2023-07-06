class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set <int> s;
        map<int,int> m;

        for(auto i : arr)
            m[i]++;

        for(auto i : m){
            auto it = s.insert(i.second);
            if(it.second == false)
                return false;
        }

        return true;
    }
};
