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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    int len;
    ListNode *head;
    Solution(ListNode* head) {
        this->head = head;
        ListNode *node = this->head;
        len = 0;
        while(node){
            len++;
            node = node->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int r = rand()%len;
        ListNode *trav = head;
        while(r--){
            trav = trav->next;
        }
        
        return trav->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */