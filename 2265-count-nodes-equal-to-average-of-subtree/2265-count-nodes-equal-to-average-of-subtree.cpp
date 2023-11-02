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

int ans = 0;

class Solution 
{
public:
    int sum(TreeNode* root, int& count)
    {
        if(root == nullptr)
            return 0;
        
        count++;
        int left = sum(root->left, count);
        int right= sum(root->right,count);
        
        return (root->val + left + right);
    }
    
    void average(TreeNode* root)
    {
        if(root == nullptr)
            return;
        int count = 0;
        int avg = sum(root, count);
        avg /= count;
        if(avg == root->val)
            ans++;
        
        average(root->left);
        average(root->right);
    }
    
    int averageOfSubtree(TreeNode* root) 
    {
        ans = 0;
        average(root);
        return ans;
    }
};