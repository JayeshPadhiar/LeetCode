/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        
        Node *node = head;
        
        while(node)
        {
            if(node->child)
            {
                Node *child = node->child;
                
                while(child->next)
                {
                    child = child->next;
                }
                
                
                if(node->next)
                {
                    child->next = node->next;
                    node->next->prev = child;
                }
                node->next = node->child;
                node->child->prev = node; 
                
                node->child = NULL;
            }
            node = node->next;
        }
        
        return head;
        
    }
};