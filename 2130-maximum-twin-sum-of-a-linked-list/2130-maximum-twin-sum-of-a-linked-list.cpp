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
    int pairSum(ListNode* head) {
        int maxi = INT_MIN;
        
        ListNode *sp = head;
        ListNode *fp = head;
        
        while(fp->next and fp->next->next){
            sp = sp->next;
            fp = fp->next->next;
        }
        
        sp->next = reverse(sp->next);
        sp = sp->next;
        
        while(sp){
            int sum = sp->val + head->val;
            maxi = max(maxi, sum);
            sp = sp->next;
            head = head->next;
        }
        
        return maxi;
        
    }
    
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL;
        
        while(head){
            ListNode *temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
        
        
    }
    
};