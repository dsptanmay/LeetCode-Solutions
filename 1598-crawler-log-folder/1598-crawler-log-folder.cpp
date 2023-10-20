class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        
        for(const string& log: logs)
        {
            if(log == "./")
                continue;
            if(log == "../")
            {
                if(st.empty())
                    continue;
                else
                    st.pop();
            }
            else
                st.push(log);
        }
        return st.size();
    }
};