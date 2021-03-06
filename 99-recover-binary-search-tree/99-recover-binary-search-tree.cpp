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
private:
    TreeNode* first;
    TreeNode* prev;
    TreeNode* middle;
    TreeNode* last;
private:
    void inorder(TreeNode* root)
    {
        if(!root)return;
        inorder(root->left);
        if(prev!=NULL and root->val < prev->val)
        {
            //There is Only One Voilation of sorting order
            if(first==NULL)
            {
                first=prev;
                middle=root;
            }
            else//There is Two Voilation of sorting order
            {
                 last=root;
            }
        }
        prev=root;
        inorder(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(first and last) swap(first->val,last->val);
        else if(first and middle) swap(first->val,middle->val);
        
        
    }
};