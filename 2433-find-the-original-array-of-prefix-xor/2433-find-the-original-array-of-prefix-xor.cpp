#define vti vector<int>
#define pb push_back
#define ppb pop_back

class Solution 
{
public:
    vti findArray(vector<int>& pref)
    {
        for (int i = pref.size()-1; i > 0; --i)
            pref[i] ^= pref[i - 1];

        return pref;
    }
};