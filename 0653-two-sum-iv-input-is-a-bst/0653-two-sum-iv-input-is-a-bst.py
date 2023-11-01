# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root:Optional[TreeNode],cur:Optional[TreeNode],k: int):
        if(cur is None):
            return False
        
        return self.search(root, cur, k-cur.val) or self.dfs(root, cur.left, k) or self.dfs(root, cur.right, k)
    
    def search(self, root:Optional[TreeNode],cur:Optional[TreeNode],val:int):
        if(root is None):
            return False
        
        return ((root.val == val) and (root!=cur))or((root.val < val) and self.search(root.right, cur, val)) or ((root.val > val) and self.search(root.left, cur, val))
        
    
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        return self.dfs(root, root, k)