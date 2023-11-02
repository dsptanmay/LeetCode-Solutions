# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.count = 0
        self.ans = 0
    def sumNodes(self, root: Optional[TreeNode]) ->int:
        if(root is None):
            return 0
        
        self.count += 1
        left = self.sumNodes(root.left)
        right = self.sumNodes(root.right)
        
        return root.val + left + right
    
    def averageNodes(self, root: Optional[TreeNode]):
        if(root is None):
            return
        
        self.count = 0
        avg = self.sumNodes(root)
        avg = avg//self.count
        if(avg == root.val):
            self.ans += 1
        
        self.averageNodes(root.left)
        self.averageNodes(root.right)
        
    def averageOfSubtree(self, root: Optional[TreeNode]) -> int:
        if(root.left is None and root.right is None):
            return 1
        
        
        self.averageNodes(root)
        return self.ans
        
        