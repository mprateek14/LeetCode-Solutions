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
    
        return ancestor(root, p, q);
        
    }
    
    TreeNode* ancestor(TreeNode *root, TreeNode *p, TreeNode *q){
        if(!root or root->val == p->val or root->val == q->val) return root;
        
        TreeNode *left = ancestor(root->left, p, q);
        TreeNode *right = ancestor(root->right, p, q);
        
        if(!left) return right;
        else if(!right) return left;
        
        return root;
    }    
};