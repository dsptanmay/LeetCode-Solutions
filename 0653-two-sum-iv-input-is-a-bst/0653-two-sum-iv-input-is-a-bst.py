# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def inorder(self, root: Optional[TreeNode], nums:List[int]):
        if(root is None):
            return
        
        self.inorder(root.left, nums)
        nums.append(root.val)
        self.inorder(root.right,nums)
        
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:

        # 2. Inorder traversal method
        
        nums = []
        self.inorder(root, nums)
        
        low = 0
        high = len(nums) - 1
        while(low<high):
            if(nums[low] + nums[high] == k):
                return True
            
            if(nums[low] + nums[high] > k):
                high -=1
            
            else:
                low += 1
        
        return False
    