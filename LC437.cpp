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

public:
    int count = 0;
    int psum(TreeNode* root, long long x){
        if(!root)
            return 0;
        
        return (x == root->val) + psum(root->left, x - root->val) + psum(root->right, x - root->val);
    }

    int pathSum(TreeNode* root, int target) {
        
        if(!root)
            return 0;

        return psum(root, (long long) target) + pathSum(root->left, (long long)target) + pathSum(root->right, (long long)target);

    }
};
