class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        int n = max(abs(sx-fx), abs(sy-fy));
        return n>0 ? t>=n : t!=1;
    }
};