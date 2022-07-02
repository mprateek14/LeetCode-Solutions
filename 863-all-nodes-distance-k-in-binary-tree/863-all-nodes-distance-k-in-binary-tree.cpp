/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*, TreeNode*> hash;
        getParents(root, hash);
        
        unordered_map<TreeNode*, bool> visited;
        
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        
        
        int level = 0;
        while(!q.empty()){
            if(k == level) break;
            int size = q.size();
            level++;
            
            for(int i=0; i<size; i++){
                TreeNode *temp = q.front();
                q.pop();
                visited[temp] = true;
                
                if(temp->left and !visited[temp->left]){
                    q.push(temp->left);
                    visited[temp->left] = true;
                }
                
                if(temp->right and !visited[temp->right]){
                    q.push(temp->right);
                    visited[temp->right] = true;
                }
                
                if(hash[temp] and !visited[hash[temp]]){
                    q.push(hash[temp]);
                    visited[hash[temp]] = true;
                }
                
            }
        }
        
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
        
        
    }
    
    void getParents(TreeNode *root, unordered_map<TreeNode*, TreeNode*> &hash){
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode *temp = q.front();
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
                hash[temp->left] = temp;
            }
            if(temp->right){
                q.push(temp->right);
                hash[temp->right] = temp;
            }
        }
        
    }
    
};