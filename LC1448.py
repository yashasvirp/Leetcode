# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxCount(self, root, x):
        if not root:
            return
        
        if root.val >= x:
            x = root.val
            self.count += 1
        
        if root.left:
            self.maxCount(root.left, x)
        
        if root.right:
            self.maxCount(root.right, x)

    def goodNodes(self, root: TreeNode) -> int:
        self.count = 0

        self.maxCount(root, root.val)

        return self.count
