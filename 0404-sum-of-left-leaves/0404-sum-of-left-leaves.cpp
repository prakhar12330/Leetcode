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
class Solution {
public:
    int res=0;
    void findSum(TreeNode* root,int direction)
    {
        if(!root)return;
        if(!root->left && !root->right)
        {
            if(direction == 0)res+=root->val;
            return;
        }
        findSum(root->left,0);
        findSum(root->right,1);
    }
    int sumOfLeftLeaves(TreeNode* root)
    {
        findSum(root,-1);
        return res;
    }
};