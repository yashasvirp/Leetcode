/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


STRATEGY-----
1. Use a map to store the array elements as key, and their indices as values.
2. Traverse array in a loop.
3. At each element A, check if another number (target - A) exists IN MAP or not.
3. If it exists, store the value (index) of (target-A) in a seperate array "res". Also store the index of element A of current iteration and break.
4. If the element is not present in the map, then store the element A and it's index in the map.

TC - O(n), SC - O(n) 

 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        map <int, int> m;

        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i];
            if(m.find(x) != m.end()){ //checking if a key is available in the map
                res.push_back(m[x]);
                res.push_back(i);
                break;
            }
            else
                m.insert({nums[i],i});
            
        }
        return res;
    }
};
