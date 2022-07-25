
class Solution {
public:
    void solve(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &pt)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left)
            {
                q.push(curr->left);
                pt[curr->left] = curr;
            }
            
            if(curr->right)
            {
                q.push(curr->right);
                pt[curr->right] = curr;
            }
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        queue<TreeNode*> q;
        unordered_map<TreeNode*, TreeNode*> pt;
        solve(root,pt);
        unordered_map<TreeNode*, bool> visited;
        q.push(target);
        visited[target] = true;
        int level = 0;
        while(!q.empty())
        {
            int c = q.size();
            if(level++ == k) break;
            while(c--)
            {
                TreeNode *curr = q.front();
                q.pop();
                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(pt[curr] && !visited[pt[curr]])
                {
                    q.push(pt[curr]);
                    visited[pt[curr]] = true;
                }
            }
            
        }
        vector<int> ans;
            while(!q.empty())
            {
                ans.push_back(q.front()->val);
                q.pop();
            }
            return ans;
            
        
    }
};