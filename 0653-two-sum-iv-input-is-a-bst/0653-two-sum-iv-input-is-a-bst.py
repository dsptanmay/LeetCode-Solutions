# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
#         1. Set method
        def dfs(root:Optional[TreeNode], s:set[int], k:int) -> bool:
            if(root is None):
                return False
            
            comp = k - root.val
            if(comp in s):
                return True
            
            s.add(root.val)
            
            return dfs(root.left, s, k) or dfs(root.right, s, k)
        
        s = set({})
        return dfs(root, s, k)
    