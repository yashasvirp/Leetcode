# Recursive solution
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preOrder(self, l, root):
        if root == None:
            return None
        
        l.append(root.val)
        self.preOrder(l,root.left)
        self.preOrder(l,root.right)
    
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l = []

        self.preOrder(l,root)

        return l



# Iterative solution
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l = []

        st = []

        if root == None:
            return None
        
        st.append(root)
    

        while(len(st) != 0):
            node = st.pop()

            if node:
                l.append(node.val)
                st.append(node.right)
                st.append(node.left)


        return l
