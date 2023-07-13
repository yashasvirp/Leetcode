# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def psum(self, root, x):
        if not root:
            return 0

        return (x == root.val) + self.psum(root.left, x - root.val) + self.psum(root.right, x - root.val)
    
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        if not root:
            return 0
        
        return self.psum(root, targetSum) + self.pathSum(root.left, targetSum) + self.pathSum(root.right, targetSum)
