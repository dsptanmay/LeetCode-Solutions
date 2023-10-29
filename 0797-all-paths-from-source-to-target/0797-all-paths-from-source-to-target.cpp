#define vti vector<int>
#define vvti vector<vti>
#define pb push_back
#define ppb pop_back


class Solution 
{
public:
    int target;
    vvti res;
    vti adj;
    
    void dfs(vvti& graph, int curNode = 0)
    {
        adj.pb(curNode);
        if(curNode == target)
            res.pb(adj);
        else
        {
            for(int node: graph[curNode])
            {
                dfs(graph, node);
            }
        }
        adj.ppb();
        
    }
    vvti allPathsSourceTarget(vvti& graph) 
    {
        target = graph.size() - 1;
        dfs(graph);
        return res;
    }
};