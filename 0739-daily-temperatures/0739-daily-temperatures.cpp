class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<int> st;
        int n = temps.size();
        
        vector<int> res(n, 0);
        
        for(int i=0; i<temps.size(); ++i)
        {
            int t = temps[i];
            while (!st.empty() && t>temps[st.top()])
            {
                int ind = st.top();
                int val = temps[i];
                st.pop();
                res[ind] = i-ind;
            }
            st.push(i);
        }
        
        return res;
    }
};