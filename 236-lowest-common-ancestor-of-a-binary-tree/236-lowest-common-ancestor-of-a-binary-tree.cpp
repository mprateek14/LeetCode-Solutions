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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root, p, q);
    }
    
    TreeNode *helper(TreeNode *root, TreeNode *p, TreeNode *q){
        if(root  == NULL or root == p or root == q) return root;
        
        TreeNode *left = helper(root->left, p, q);
        TreeNode *right = helper(root->right, p, q);
        
        if(!left) return right;
        else if(!right) return left;
        else return root;
        
    }
    
};