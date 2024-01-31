class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].length();
        int prev{0}, curr{0}, res{0};
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                if(bank[i][j] == '1')
                    curr++;
            }
            if(curr != 0)
            {
                res += prev*curr;
                prev = curr;
                curr = 0;
            }
        }
        return res;
    }
};