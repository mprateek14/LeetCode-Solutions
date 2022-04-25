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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        findPaths(root, ans, to_string(root->val));
        
        return ans;
        
    }
    
    void findPaths(TreeNode *root, vector<string> &ans, string s){
        
        if(!root->right and !root->left){
            cout << s << " ";
            ans.push_back(s);
            return;
        }
        if(root->left) findPaths(root->left, ans, s+"->"+to_string(root->left->val));
        if(root->right) findPaths(root->right, ans, s+"->"+to_string(root->right->val));
        
    }
    
};