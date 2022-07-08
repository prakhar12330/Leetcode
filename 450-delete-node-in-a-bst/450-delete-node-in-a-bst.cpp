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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
      //If Root Node Is Equal To NULL
      if(!root)return NULL;
      //If Root Node Value Is The Key 
      if(root->val==key)
      {
          return solve(root);
      }
      TreeNode* dummy=root;
        while(root!=NULL)
        {
            if(key<root->val)
            {
                if(root->left!=NULL && root->left->val==key)
                {
                    root->left = solve(root->left);
                    break;
                }
                else
                {
                    root=root->left;
                }
            }
            else 
            {
                if (root->right != NULL && root->right->val == key)
                {
                    root->right = solve(root->right);
                    break;
                } 
                else {
                    root = root->right;
                }
            }
        }
       return dummy;
    }
    TreeNode* solve(TreeNode* root) {
            if (root->left == NULL) 
            {
                return root->right;
            } 
            else if (root->right == NULL)
            {
                return root->left;
            } 
            TreeNode* rightChild = root->right;
            TreeNode* lastRight = findLastRight(root->left);
            lastRight->right = rightChild;
            return root->left;
    }
    TreeNode* findLastRight(TreeNode* root) {
        if (root->right == NULL) {
            return root;
        }
        return findLastRight(root->right);
    }
};