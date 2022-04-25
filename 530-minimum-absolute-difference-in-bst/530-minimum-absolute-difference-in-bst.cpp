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
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        
        int mini = -1;
        int diff = INT_MAX;
        
        inorder(root, mini, diff);
        
        return diff;
    }
    
    void inorder(TreeNode *root, int &mini, int &diff){
        if(root == NULL) return;
        
        inorder(root->left,mini, diff);
        if(mini != -1) diff = min(root->val - mini, diff);
            mini = root->val;
        inorder(root->right,mini, diff);
    }
};