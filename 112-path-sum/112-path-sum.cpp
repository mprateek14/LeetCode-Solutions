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
    bool hasPathSum(TreeNode* root, int targetSum) {

        return checkPath(root, targetSum);

        
        
    }
    
    int checkPath(TreeNode *root, int target){
        if(root == NULL) return false;
        target = target - root->val;
        
        if(target == 0 && root->left == NULL && root->right == NULL) return true;
        
        return checkPath(root->left, target) || checkPath(root->right, target);
        
    }
};