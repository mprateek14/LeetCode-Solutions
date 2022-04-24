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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val == key) return solve(root);
        TreeNode *temp = root;
        while(root){
            if(root->val < key) {
                if(root->right and root->right->val == key){
                    root->right = solve(root->right);
                    break;
                }
                else root = root->right;
            }
            else{
                if(root->left and root->left->val == key){
                    root->left = solve(root->left);
                    break;
                } 
                else root = root->left; 
            }
        }
        return temp;
    }
    
    TreeNode* findRightest(TreeNode *node){
        if(!node->right) return node; 
        return findRightest(node->right);
    }
    
    TreeNode* solve(TreeNode *root){
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        
        TreeNode *rightest = findRightest(root->left);
        rightest->right = root->right;
        
        return root->left;
        
    }
};