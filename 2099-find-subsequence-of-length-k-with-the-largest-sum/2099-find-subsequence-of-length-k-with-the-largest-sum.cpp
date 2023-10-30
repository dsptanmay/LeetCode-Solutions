#define vti vector<int>
#define pb push_back
#define ppb pop_back
#define ll long long
#define vll vector<ll>


class Solution 
{
public:
    vti maxSubsequence(vti& nums, int k) {
        vti res;
        const int n = nums.size();
        int t = k, i = 0;
        
        while(t > 0)
        {
            res.pb(nums[i]);
            i++;
            t--;
        }
        
        for(int j=i; j<n; ++j)
        {
            int minInd = min_element(res.begin(), res.end()) - res.begin();
            if( res[minInd] < nums[j])
            {
                res.erase(res.begin() + minInd);
                res.pb(nums[j]);
            }
        }
        
        return res;
    }
};