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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> v;
        
        if(root == NULL)
            return v;

        stack<TreeNode *> st;
        TreeNode *t = root;

        while(t or !st.empty()){
            if(!t){
                t = st.top();
                st.pop();
            }
            else{
                if(t->left)
                    st.push(t->left);
            v.push_back(t->val);
            t = t->right;
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};

//Recursive solution
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
    void postOrder(vector<int> &v, TreeNode *root){
        if(root == NULL)
            return;
        
        postOrder(v,root->left);
        postOrder(v,root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        
        postOrder(v,root);
        
        return v;
    }
};
