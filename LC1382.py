# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self, arr, root):
        if root == None:
            return
        
        self.inorder(self.arr, root.left)
        self.arr.append(root.val)
        self.inorder(self.arr, root.right)

    def balanceBST(self, root: TreeNode) -> TreeNode:
        self.arr = []
        self.inorder(self.arr, root)
        print(self.arr)
        l,h  = 0, len(self.arr)-1
        root = self.createTree(l,h)
        return root
    
    def createTree(self, l, h):	
        m = h - (h-l)//2
        
        root = TreeNode(self.arr[m])

        if(l == m):
            root.left == None
        else:
            root.left = self.createTree(l, m-1)
            
        if(h == m):
            root.right = None
        else:
            root.right = self.createTree(m+1, h)
        
        return root
