class Solution {
public:
    string removeOuterParentheses(string s) 
    {
      string res;
      int op = 0;
      for(char ch: s)
      {
        if(ch == '(' && op++ > 0)
          res += ch;
        
        if(ch == ')' && op-- > 1)
          res += ch;
      }
      
      return res;
    }
};