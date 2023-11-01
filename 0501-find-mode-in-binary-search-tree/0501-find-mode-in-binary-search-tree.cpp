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
#define pb push_back

class Solution 
{
public:
    int maxf = 0, curf = 0, pre = 0;
    void inorder(TreeNode* root, vti& data)
    {
        if(root == nullptr)
            return;
        inorder(root->left, data);
        if(pre == root->val)
            curf++;
        else
            curf = 1;
        
        if(curf > maxf)
        {
            data.clear();
            maxf = curf;
            data.pb(root->val);
        }
        else if(curf == maxf)
            data.pb(root->val);
        pre = root->val;
        inorder(root->right, data);
    }
    vector<int> findMode(TreeNode* root) 
    {
        vti res;
        inorder(root, res);
        return res;
    }
};