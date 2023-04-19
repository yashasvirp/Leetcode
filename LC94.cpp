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
   vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode *> st;

        if(root == NULL)
            return v;

        TreeNode *t = root;

        while(t or !st.empty()){
            if(!t){
                t = st.top();
                st.pop();
                v.push_back(t->val);
                t = t->right;
            }
            else{
                st.push(t);
                t = t->left;
            }
            
        }


        return v;
    }
};

//Recursive solution

class Solution {
public:
    void inOrder(vector<int> &v,  TreeNode *root){
        if(root == NULL)
            return;
        
        inOrder(v,root->left);
        v.push_back(root->val);
        inOrder(v,root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;

        inOrder(v,root);

        return v;
    }
};
