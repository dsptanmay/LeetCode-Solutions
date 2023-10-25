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
class Solution 
{
public:
    TreeNode* construct(vector<int> A, int bound, int& i)
    {
      if(i == A.size() || A[i] > bound)
        return nullptr;
      
      TreeNode* root = new TreeNode(A[i++]);
      root->left = construct(A, root->val, i);
      root->right = construct(A, bound, i);
      return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
      int i=0;
      int bound = INT_MAX;
      TreeNode* root = construct(preorder, bound, i);
      return root;
    }
};