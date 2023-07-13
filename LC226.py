# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:

        if not root:
            return None
        
        if root.left and root.right:
            t = root.right
            root.right = self.invertTree(root.left)
            root.left = self.invertTree(t)
        elif root.left and not root.right:
            root.right = self.invertTree(root.left)
            root.left = None
        elif root.right and not root.left:
            root.left = self.invertTree(root.right)
            root.right = None
        else:
            return root
        return root