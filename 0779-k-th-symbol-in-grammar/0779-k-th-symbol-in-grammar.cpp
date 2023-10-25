class Solution {
public:
    int kthGrammar(int n, int k) 
    {
      int cur = 0;
      int left = 1, right = pow(2, n-1);
      for(int i=0; i<n-1; ++i)
      {
        int mid = (left + right)/2;
        if(k<=mid)
          right = mid;
        else
        {
          left = mid+1;
          if(cur)
            cur = 0;
          else
            cur = 1;
        }
      }
      return cur;
      
    }
};