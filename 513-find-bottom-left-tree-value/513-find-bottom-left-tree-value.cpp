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
    int findBottomLeftValue(TreeNode* root) 
    {
        // map<int,TreeNode*> mp;
        
        int ans = -1;
        
        queue <TreeNode*> q;
        
        if(root == 0) 
            return ans;
        
        q.push(root);
        
        while(!q.empty())
        {
            
            ans = q.front()->val;
            int c = q.size();
            while(c--)
            {
                TreeNode *temp = q.front();
                auto p = q.front();
                q.pop();
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
        
    }
};