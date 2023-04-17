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
    
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v;
        stack <TreeNode *> st;

        if(root == NULL){
            // v.push_back(NULL);
            return v;
        }

        if(!root->left && !root->right){
            v.push_back(root->val);
            return v;
        }
        
        TreeNode *temp = root;

        st.push(temp);
        v.push_back(root->val);

        while(!st.empty()){
            if(temp->left && temp->right){
                st.push(temp->right);
                v.push_back(temp->left->val);
                temp = temp->left;
            }
            else if(!temp->left && temp->right){
                v.push_back(temp->right->val);
                temp = temp->right;
            }
            else if(temp->left && !temp->right){
                v.push_back(temp->left->val);
                temp = temp->left;
            }
            else if(temp->left == NULL and temp->right == NULL){
                // v.push_back(temp->val);
                temp = st.top();
                if(temp == root)
                    break;
                v.push_back(temp->val);
                st.pop();
            }
        }

        return v;
    }
};


//recursive solution:
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

    void preOrder(vector<int> &v, TreeNode* root){
        if(root == NULL)
            return;
        
        v.push_back(root->val);
        preOrder(v, root->left);
        preOrder(v, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v;

        preOrder(v, root);
        
        return v;
    }
};
