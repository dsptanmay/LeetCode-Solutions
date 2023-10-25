#include <bits/stdc++.h>
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int mxNarea{0};


        stack<pair<int, int>> st;

        for(int i=0;i<heights.size();i++)
        {
            int startInd = i;
            while(!st.empty() && st.top().second > heights[i])
            {
                pair<int,int> elm = st.top();
                st.pop();
                mxNarea = max(mxNarea, elm.second * (i - elm.first));
                startInd = elm.first;
            }

            pair<int, int> temp{startInd, heights[i]};
            st.push(temp);
        }

        while(!st.empty())
        {
            pair<int, int> elm = st.top();
            st.pop();
            int area = elm.second * (heights.size() - elm.first);
            mxNarea = max(mxNarea, area);
        }

        return mxNarea;
    }
};