
#define data val
class Solution 
{
public:
    bool isIdentical(TreeNode *left, TreeNode *right)
    {
        if( left== NULL || right == NULL)
            return left==right;
        if(left->val != right->val)
            return false;
         
        return isIdentical(left->left,right->right) && 
                isIdentical(left->right,right->left);
             
    }
    bool isSymmetric(TreeNode* root) 
    {
        return !root || isIdentical(root->left, root->right);
    }
};