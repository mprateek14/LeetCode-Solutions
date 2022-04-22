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
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        
        int lh = leftHt(root);
        int rh = rightHt(root);
        
        if(lh == rh) return pow(2,lh)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    int leftHt(TreeNode *root){
        if(root == NULL) return 0;
        int cnt = 0;
        while(root){
            root = root->left;
            cnt++;
        }
        
        return cnt;
    }
    
    int rightHt(TreeNode *root){
        if(root == NULL) return 0;
        int cnt = 0;
        while(root){
            root = root->right;
            cnt++;
        }
        return cnt;
    }
    
};