# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def revInOrder(self, root: TreeNode) -> None:
        if not root:
            return
        
        self.revInOrder(root.right)
        root.val += self.sum
        self.sum = root.val
        self.revInOrder(root.left)

    def bstToGst(self, root: TreeNode) -> TreeNode:
        self.sum = 0
        self.revInOrder(root)
        return root
