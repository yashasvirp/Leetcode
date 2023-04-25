/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector <int> v;

        if(root == NULL)
            return v;
            
        stack <Node*> st;

        st.push(root);

        while(!st.empty()){
            Node *t = st.top();
            st.pop();

            v.push_back(t->val);

            for(auto i = t->children.rbegin(); i < t->children.rend(); i++)
                st.push(*i);
        }

        return v;
        
    }
};

//Recursive Solution

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node *root, vector<int> &v){
        if(root == NULL)
            return;
        
        v.push_back(root->val);
        for(auto i : root->children)
            traverse(i,v);
    }

    vector<int> preorder(Node* root) {
        vector <int> v;

        if(root == NULL)
            return v;
            
        traverse(root, v);

        return v;
        
    }
};
