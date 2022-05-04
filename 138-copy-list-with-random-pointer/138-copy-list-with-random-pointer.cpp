/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map <Node*, Node*> hash;
        
        Node *cur = head;
        
        while(cur){
            Node *copy = new Node(cur->val);
            hash[cur] = copy;
            cur = cur->next;
        }
        
        cur = head;
        
        while(cur){
            hash[cur]->next = hash[cur->next];
            hash[cur]->random = hash[cur->random];
            cur = cur->next;
        }
        
        return hash[head];
        
    }
};