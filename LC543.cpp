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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        if(!root->left && !root->right)
            return 0;
        
        TreeNode *t = root;
        
        int ans = 0;

        pre(root, ans);

        return ans;

    }
private:
    void pre(TreeNode *root, int &ans){

        if(root == NULL)
            return;

        int c = maxDepth(root->left) + maxDepth(root->right);
        if(ans < c)
            ans = c;
        pre(root->left, ans);
        pre(root->right, ans);
    }

    int maxDepth(TreeNode* root){
        if(root == NULL)
            return 0;
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
