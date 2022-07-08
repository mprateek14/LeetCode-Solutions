/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root) return NULL;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            vector<Node*> level;
            for(int i=0; i<size; i++){
                Node* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                level.push_back(temp);
            }
            
            int cur = 0;
            int count = size;
            while(count){
                if(cur == size-1){
                    level[cur]->next = NULL;
                    // count--;
                    // cur++;
                    break;
                }
                Node *point = level[cur+1];
                level[cur]->next = point;
                cur++;
                count--;
            }

        }
        
        return root;
        
    }
};