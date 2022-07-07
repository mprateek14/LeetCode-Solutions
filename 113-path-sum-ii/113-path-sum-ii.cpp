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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        
        if(!root) return ans;
        
        vector<int> temp;
        
        findSum(root, targetSum, ans, temp);
        
        return ans;
    }
    
    void findSum(TreeNode *root, int sum, vector<vector<int>> &ans, vector<int> temp){
        // if(!root) return;
        
        int data = root->val;
        temp.push_back(data);
        
        if(root->left) findSum(root->left, sum-data, ans,temp);
        if(root->right) findSum(root->right, sum-data, ans, temp);
        
        if(!root->left and !root->right){
            if(sum - data == 0) ans.push_back(temp);
        }
        
        temp.pop_back();
        
    }
    
};