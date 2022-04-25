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
    int sumOfLeftLeaves(TreeNode* root) {
        
        int ans = 0;
        
        addLeaves(root, ans);
        
        return ans;
    }
    
    
    void addLeaves(TreeNode *root, int &ans){
        if(root->left == NULL and root->right == NULL) return;
        if(root->left and !root->left->left and !root->left->right){
            ans+=root->left->val;
        }
        
        if(root->left) addLeaves(root->left, ans);
        if(root->right) addLeaves(root->right, ans);
        
    }
    
};