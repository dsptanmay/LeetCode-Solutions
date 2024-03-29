class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        # two pointer approach
        # keep track of preSum and postSum
        # apply formula to get sum of abs difference at each i
        pre = 0
        pos = sum(nums)
        n = len(nums)
        res = [0]*n
        for i in range(0, n):
            pos -= nums[i]
            res[i] = pos - nums[i]*(n-i-1) + ((nums[i])*i - pre)
            pre += nums[i]
            
        return res