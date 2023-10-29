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
#define ll long long
class Solution 
{
public:
    void leafOrder(TreeNode* root, vti& data)
    {
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr)
        {
            data.pb(root->val);
            return;
        }
        
        leafOrder(root->left, data);
        leafOrder(root->right, data);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vti d1;
        vti d2;
        leafOrder(root1, d1);
        leafOrder(root2, d2);
        
        if(d1 != d2)
            return false;
        
        return true;
    }
};