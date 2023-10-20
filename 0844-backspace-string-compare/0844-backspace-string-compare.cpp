class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char> st1;
        stack<char> st2;
        for(int i=0; i<s.length(); ++i)
        {
            if(st1.empty() && s[i] == '#')
                continue;
            else if(s[i] == '#')
                st1.pop();
            else
                st1.push(s[i]);
        } 
        for(int i=0; i<t.length(); ++i)
        {
            if(st2.empty() && t[i] == '#')
                continue;
            else if(t[i] == '#')
                st2.pop();
            else
                st2.push(t[i]);
        }       
        if(st1.size() != st2.size())
            return false;



        string r1 = "", r2 = "";
        while(!st1.empty())
        {
            r1 += st1.top();
            st1.pop();
        }

        while(!st2.empty())
        {
            r2 += st2.top();
            st2.pop();
        }
        // cout << r1 << " " << r2 << " ";
        if(r1 == r2)
            return true;
        return false;
    }
};