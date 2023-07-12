# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def store(self, root, v):
        if not root:
            return
        
        if not root.left and not root.right:
            v.append(root.val)
        
        self.store(root.left, v)
        self.store(root.right, v)

    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        v1 = []
        v2 = []

        self.store(root1, v1)
        self.store(root2, v2)

        return v1 == v2
        
