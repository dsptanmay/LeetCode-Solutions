class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) 
    {
        int a,b,i,n=nums.size();
        for(i = 0; i < n; i++)
        {
            if(nums[i]==1)
                a = i;
            else if(nums[i]==n)
                b = i;
        }
        if(a<b)
            return a+n-1-b;
        else
            return a+n-1-b-1;
    }
};