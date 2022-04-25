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
    int minDiffInBST(TreeNode* root) {
        
        int val = -1;
        int diff = INT_MAX;
        
        inorder(root, val, diff);
        
        return diff;
        
    }
    
    void inorder(TreeNode *root, int &val, int &diff){
        if(root == NULL) return;
        
        inorder(root->left, val, diff);
        if(val != -1) diff = min(diff, root->val-val);
        val = root->val;
        inorder(root->right, val, diff);
    }
    
};