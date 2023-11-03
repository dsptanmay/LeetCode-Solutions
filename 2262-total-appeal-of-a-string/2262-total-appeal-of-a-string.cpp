typedef signed long long ll;
typedef vector<int> vti;


class Solution 
{
public:
    long long appealSum(string s) 
    {
        ll res=0;
        vti last(26);
        const ll n = s.size();
        for(int i=0; i<n; ++i)
        {
            last[s[i]-'a'] = i+1;
            for(int j: last)
                res += j;
            
        }       
        return res;
    }
};