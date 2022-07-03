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
    void flatten(TreeNode* root) {
        
        if(!root) return;
        
        stack<TreeNode*> st;
        st.push(root);
        
        
        while(!st.empty()){
            TreeNode *temp = st.top();
            st.pop();
            
            if(temp->right){
                st.push(temp->right);
            }
            
            if(temp->left){
                st.push(temp->left);
            }
            
            if(!st.empty()){
                TreeNode *tp = st.top();
                temp->right = tp;
                temp->left = NULL;
            }
        }
        
    }
};