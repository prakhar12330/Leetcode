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
     void inorderTraversal(TreeNode* root,vector<int>&nodeValues)
    {
           if(!root)return;
        
           inorderTraversal(root->left,nodeValues);
           nodeValues.push_back(root->val);
           inorderTraversal(root->right,nodeValues);
    }
    int getMinimumDifference(TreeNode* root)
    {
        vector<int> nodeValues;
        inorderTraversal(root,nodeValues);
        
        int ans=INT_MAX;
        for(int i=0;i<nodeValues.size()-1;i++)
        {
            if(nodeValues[i+1]-nodeValues[i]<ans)
            {
               ans=nodeValues[i+1]-nodeValues[i];
            }
        }
        return ans;
    }
};