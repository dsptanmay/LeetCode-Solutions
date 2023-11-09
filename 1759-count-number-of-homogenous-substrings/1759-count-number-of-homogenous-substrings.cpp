class Solution {
public:
    int countHomogenous(string s) 
    {
        const int mxN = 1e9 + 7;
        int res = 0, count = 0;
        char curr = '.';

        for(char a: s)
        {
            if(a == curr)
                count++;
            else
                count = 1;
            
            curr = a;
            res = (res+count)%mxN;
        }
        return res%mxN;
    }
};