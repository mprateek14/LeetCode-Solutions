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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *node = new TreeNode(val);
        
        TreeNode *temp = root;
        
        if(root == NULL) return node;
        
        while(true){
            if(root->val < val){
                if(root->right) root = root->right;
                else{
                    root->right = node;
                    break;
                }
            }
            else{
                if(root->left) root = root->left;
                else{
                    root->left = node;
                    break;
                }
            }
        }
        
        return temp;
        
    }
};