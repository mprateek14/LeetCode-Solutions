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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> inMap;
        
        for(int i=0; i<inorder.size(); i++){
            inMap[inorder[i]] = i;
        }
        
        TreeNode *root = buildNow(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, inMap);
    
        return root;        
    }
    
    TreeNode* buildNow(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart,                        int inEnd, map<int, int> &inMap){
        
        if(preStart>preEnd or inStart>inEnd) return NULL;
        
        TreeNode *root = new TreeNode(preorder[preStart]);
        
        int inRootIdx = inMap[root->val];
        int leftSize = inRootIdx - inStart;
        
        root->left = buildNow(preorder, preStart+1, preStart+leftSize, inorder, inStart, inRootIdx-1, inMap);
        
        root->right = buildNow(preorder, preStart+leftSize+1, preEnd, inorder, inRootIdx+1, inEnd, inMap);
        
        return root;
        
    }
    
};