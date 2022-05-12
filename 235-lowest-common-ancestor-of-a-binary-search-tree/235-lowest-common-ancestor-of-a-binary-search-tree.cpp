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
        if(root == NULL) return NULL;
        
        int cur = root->val;
        
        if(cur<p->val and cur<q->val) return helper(root->right, p, q);
        else if(cur>p->val and cur>q->val) return helper(root->left, p, q);
        
        return root;
        
        
        
    }
    
};