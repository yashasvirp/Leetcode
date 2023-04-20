# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.ans = 0

    def maxDepth(self, root):
        if root == None:
            return 0
        
        return 1 + max(self.maxDepth(root.left),self.maxDepth(root.right))
    
    def pre(self, root):
        if root == None:
            return
        
        count = self.maxDepth(root.left) + self.maxDepth(root.right)
        if self.ans < count:
            self.ans = count
        
        self.pre(root.left)
        self.pre(root.right)

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return 0
        
        if not root.left and not root.right:
            return 0

        self.pre(root)

        return self.ans
