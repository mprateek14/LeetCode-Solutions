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
        
        return helper(head, NULL);
        
    }
    
    TreeNode *helper(ListNode *head, ListNode *tail){
        if(head == tail) return NULL;
        ListNode *sp = head;
        ListNode *fp = head;
        
        while(fp!=tail and fp->next!=tail){
            sp = sp->next;
            fp = fp->next->next;
        }
        
        TreeNode *node = new TreeNode(sp->val);
        
        node->left = helper(head, sp);
        node->right = helper(sp->next, tail);
        
        return node;
        
    }
    

    
};