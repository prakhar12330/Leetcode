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
    
    bool solve(TreeNode* root01,TreeNode* root02)
    {
       if(root01==NULL && root02==NULL)return true;
       else if(root01==NULL || root02==NULL)return false;
        
       if(root01->val!=root02->val)return false;
        
       return(solve(root01->left,root02->right)&&solve(root01->right,root02->left)) ;
    }
    bool isSymmetric(TreeNode* root)
    {
      if(!root)return true;
      return solve(root->left,root->right);
    }
};