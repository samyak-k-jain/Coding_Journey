
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        
        queue<TreeNode*> q;
        vector<vector<int>>v;
        if(root ==NULL)
            return v;
        q.push(root);
        bool flag = 0;
        while(!q.empty())
        {
            int c = q.size();
            vector<int> s;
            while(c--)
            {
                TreeNode *temp = q.front();
                q.pop();
                s.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(flag) reverse(s.begin(),s.end());
            flag = !flag;
            v.push_back(s);
        }
           return v; 
    }
    
};