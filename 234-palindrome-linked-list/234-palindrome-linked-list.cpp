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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head->next) return true;
        ListNode *sp = head;
        ListNode *fp = head;
        ListNode *cur = head;
        
        while(fp->next and fp->next->next){
            sp = sp->next;
            fp = fp->next->next;
        }
        
        sp->next = reverse(sp->next);
        sp = sp->next;
        
        
        while(sp){
            if(cur->val != sp->val) return false;
            cur = cur->next;
            sp = sp->next;
        }
        
        return true;
        
    }
    
    
    ListNode *reverse(ListNode *head){
        ListNode *cur = head;
        ListNode *prev = NULL;
        
        while(cur){
            ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    
};