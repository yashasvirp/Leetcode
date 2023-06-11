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
    TreeNode* invertTree(TreeNode* root) {
        
        if(not root)
            return NULL;
        if(root->left and root->right){
            TreeNode *t = root->right;
            root->right = invertTree(root->left);
            root->left = invertTree(t);
        }
        else if(root->left and not root->right){
            root->right = invertTree(root->left);
            root->left = NULL;
        }
        else if(root->right and not root->left){
            root->left = invertTree(root->right);
            root->right = NULL;
        }
        else 
            return root;
    
        return root;
    }
};
