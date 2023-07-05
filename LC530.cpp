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
    int m = INT_MAX;
    int previous = INT_MAX;
public:

    void minTree(TreeNode *root){
        if(root == NULL)
            return;
        
        if(root->left)
            minTree(root -> left);

        m = min(m, abs(previous - root -> val));
        previous = root -> val;
        
        if(root->right)
            minTree(root -> right);
    }

    int getMinimumDifference(TreeNode* root) {
        minTree(root);
        return m;
    }
};
