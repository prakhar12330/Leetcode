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
    int inorderTraversalBST1(TreeNode* root1,int low,int high,int&sum)
    {
        if(!root1)return 0;
        inorderTraversalBST1(root1->left,low,high,sum);
        if(root1->val >=low && root1->val<=high)
        {
         sum+=root1->val;
        }
        inorderTraversalBST1(root1->right,low,high,sum);
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        int sum=0;
        int result=inorderTraversalBST1(root,low,high,sum);
        return result;
    }
};