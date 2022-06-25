/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void markParents(TreeNode* root, unordered_map<TreeNode*,TreeNode*>& parentTrack)
    {
        queue<TreeNode*>queueMP;
        queueMP.push(root);
        while(!queueMP.empty())
        {
            TreeNode* temp=queueMP.front();
            queueMP.pop();
            if(temp->left)
            {
                parentTrack[temp->left]=temp;
                queueMP.push(temp->left);
            }
                
            if(temp->right) 
            {
                parentTrack[temp->right] = temp;
                queueMP.push(temp->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        vector<int> result;
        unordered_map<TreeNode*,TreeNode*>parentTrack;
        markParents(root,parentTrack);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int currlvl=0;
        while(!q.empty())
        {
            int size=q.size();
            if(currlvl==k)break;
            currlvl++;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left && !visited[temp->left]) {
                    q.push(temp->left);
                    visited[temp->left] = true;
                }
                if(temp->right && !visited[temp->right]) {
                    q.push(temp->right);
                    visited[temp->right] = true;
                }
                if(parentTrack[temp] && !visited[parentTrack[temp]]) {
                    q.push(parentTrack[temp]);
                    visited[parentTrack[temp]] = true;
                }
            }
        }
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            result.push_back(temp->val);
        }
        
        return result;
        
    }
};