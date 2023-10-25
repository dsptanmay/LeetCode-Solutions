/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#define vti vector<int>
#define vt vector
#define pb push_back

class Solution 
{
public:
  vector<int> largestValues(TreeNode* root) 
  {
//      res = []
//         if not root:
//           return []

//         res = []

//         q = deque([root])

//         while q:
//           row_max = q[0].val
//           n = len(q)
//           for i in range(n):
//             node = q.popleft()
//             row_max = max(row_max, node.val)

//             if node.left:
//               q.append(node.left)

//             if node.right:
//               q.append(node.right)

//           res.append(row_max)

//         return res;
    
    vti res;
    if(root == nullptr)
        return res;
    
    deque<TreeNode*> q;
    q.pb(root);
    
    while(!q.empty())
    {
      int row_max = q.front()->val;
      int n = q.size();
      for(int i=0; i<n; ++i)
      {
        TreeNode* node = q.front();
        q.pop_front();
        row_max = max(row_max, node->val);
        if(node->left)
          q.pb(node->left);
        if(node->right)
          q.pb(node->right);
      }
      res.pb(row_max);
    }
    
    return res;
  }
};