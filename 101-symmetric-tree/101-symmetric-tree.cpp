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
    bool isSymmetric(TreeNode* root) {
        
        if(!root->left and !root->right) return true;
        
        return helper(root->left, root->right);
    
    }
    
    bool helper(TreeNode *left, TreeNode *right){
        if(!left and !right) return true;
        if(!left or !right) return false;
        
        return(left->val == right->val and helper(left->left, right->right) and helper(left->right, right->left));
        
        
    }
    
};