class Solution:
    def isIdealPermutation(self, nums: List[int]) -> bool:
        cmax = 0
        for i in range(len(nums)-2):
            cmax = max(cmax, nums[i])
            if(cmax > nums[i+2]):
                return False
        
        return True