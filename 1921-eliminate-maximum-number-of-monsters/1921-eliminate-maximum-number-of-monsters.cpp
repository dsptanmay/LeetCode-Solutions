#define vti vector<int>
#define pb push_back
#define ppb pop_back
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) 
    {
        const int n = dist.size();
        for(int i=0; i<n; ++i)
            speed[i] = (dist[i]-1)/speed[i];
        
        sort(speed.begin(), speed.end());
        for(int i=0; i<n; ++i)
        {
            if(i > speed[i])
                return i;
        }
        
        return n;
    }
};