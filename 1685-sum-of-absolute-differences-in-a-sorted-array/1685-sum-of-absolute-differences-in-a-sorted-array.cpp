class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        // two pointer approach
        // keep track of pre sum and post sum
        vector<int> res(nums.size(), 0);
        int pre{0}, pos = accumulate(nums.begin(), nums.end(), 0);
        
        for(int i=0; i<nums.size(); ++i)
        {
            pos -= nums[i];
            res[i] = pos - (nums[i]*(nums.size()-i-1)) + (nums[i]*i - pre);
            pre += nums[i];
        }
        
        return res;
        
    }
};