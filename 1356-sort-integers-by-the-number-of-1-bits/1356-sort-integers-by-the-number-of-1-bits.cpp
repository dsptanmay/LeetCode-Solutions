#define vti vector<int>
#define pb push_back
#define ppb pop_back

class Solution {
public:
    static int countOnes(int a)
    {
        int c = 0;
        while(a)
        {
            a = a&(a-1);
            c++;
        }
        return c;
    }
    static bool compare(int&a, int& b)
    {
        // return __builtin_popcount(a) < __builtin_popcount(b);
        int p = countOnes(a);
        int q = countOnes(b);
        
        if(p == q)
            return a<=b;
        return p<q;
    }
    vti sortByBits(vector<int>& arr)
    {
        vti res = arr;
        sort(res.begin(), res.end(), compare);
        
        return res;
    }
};