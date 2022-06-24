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
    int widthOfBinaryTree(TreeNode* root) 
    {
       if(!root) return 0;
       int ans=0;
       queue<pair<TreeNode*,int>>q;
       q.push({root,0});
       while(!q.empty())
       {
           int size=q.size();
           int currMin=q.front().second;
           int leftmost,rightmost;
           for(int i=0;i<size;i++)
           {
               long int curr_idx=q.front().second-currMin;
               TreeNode* temp=q.front().first;
               q.pop();
               if(i==0)leftmost=curr_idx;
               if(i==size-1)rightmost=curr_idx;
               if(temp->left)
               {
                   q.push({temp->left,curr_idx * 2 + 1});
               }
               if(temp->right)
               {
                   q.push({temp->right,curr_idx * 2 + 2});
               }
           }
           ans=max(ans,rightmost-leftmost+1);
       }
        return ans;
    }
};