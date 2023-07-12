/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

private:
vector<int> v1, v2;
public:
    void store(TreeNode* root, vector<int>& v){
        if(!root)
            return;
        
        if(!root->left and !root->right)
            v.push_back(root->val);
        
        
        store(root->left, v);
        store(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        store(root1, v1);
        store(root2, v2);
        
        return v1 == v2;
    }
};
