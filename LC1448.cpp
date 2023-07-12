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
    int count = 0;
public:

    void maxCount(TreeNode* root, int x){
        if(root->val >= x){
            x = root->val;
            count++;
        }
        
        if(root->left)
            maxCount(root->left, x);
        
        if(root->right)
            maxCount(root->right, x);

    }

    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;

        maxCount(root, root->val);

        return count;
    }
};
