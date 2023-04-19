# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l = []
        st = []
        if root == None:
            return l
        
        t = root

        while t or (len(st) != 0):

            if not t:
                t = st.pop()
                l.append(t.val)
                t = t.right
            else:
                st.append(t)
                t = t.left
        
        return l


## Recursive solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inOrder(self, l ,root):
        if root == None:
            return
        
        self.inOrder(l,root.left)
        l.append(root.val)
        self.inOrder(l,root.right)
    
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l = []

        self.inOrder(l,root)

        return l;
