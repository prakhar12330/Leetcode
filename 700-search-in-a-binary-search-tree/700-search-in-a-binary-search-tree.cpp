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
    TreeNode* solveRecurr(TreeNode* root, int val_)
    {
        //Base Case
        if(root==NULL)return root;
        
        TreeNode* ans=new TreeNode();
        
        
        if(val_< root->val)
        {
            ans=solveRecurr(root->left,val_);
        }
        else if (val_>root->val)
        {
            ans=solveRecurr(root->right,val_);
        }
        else 
        {
            ans=root;
        }    
        
        return ans;
    }
    TreeNode* searchBST(TreeNode* root, int val)
    {
       
       return solveRecurr(root,val); 
    }
};