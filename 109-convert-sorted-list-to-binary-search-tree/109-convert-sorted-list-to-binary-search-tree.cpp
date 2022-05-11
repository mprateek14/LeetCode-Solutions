/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(!head) return NULL;
        
        vector<int> maps;
        
        ListNode *node = head;
        
        while(node){
            maps.push_back(node->val);
            node = node->next;
        }
        
        int n = maps.size();
        
        TreeNode *newHead = helper(maps, 0, n-1);
        
        return newHead;
        
    }
    
    TreeNode *helper(vector<int> &arr, int low, int high){
        if(low>high) return NULL;
        
        int mid = low + (high-low)/2;
        
        TreeNode *head = new TreeNode(arr[mid]);
        
        head->left = helper(arr, low, mid-1);
        head->right = helper(arr, mid+1, high);
        
        return head;
        
    }
    
};