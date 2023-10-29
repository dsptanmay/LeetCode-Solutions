class Solution:
    def minSum(self, nums1: List[int], nums2: List[int]) -> int:
        a = nums1.count(0)
        b = nums2.count(0)
        p = sum(nums1)
        q = sum(nums2)
        x = p + a
        y = q + b
        
        if x < y :
            if a != 0:
                return y
            return -1
        
        if x == y:
            return x
        
        if y < x :
            if b != 0:
                return x
            return -1
            