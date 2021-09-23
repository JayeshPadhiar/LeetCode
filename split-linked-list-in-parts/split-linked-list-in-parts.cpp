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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        int len = 0;
        ListNode *node = head;
        
        while(node)
        {
            len++;
            node = node->next;
        }
        
        int each = len/k;
        int first = len%k;
        
        cout<<each<<" "<<first<<endl;
        
        ListNode *trav = head;
        vector<ListNode*> vec = {};
        
        while(k--)
        {
            if(!trav)
            {
                vec.push_back(NULL);
                continue;
            }
            
            int i = each;
            ListNode *list = new ListNode();
            ListNode *listtrav = list;
            while(i>0)
            {
                listtrav->next = new ListNode(trav->val);
                listtrav = listtrav->next;
                trav = trav->next;
                i--;
            }
            if(first>0)
            {
                if(trav)
                {
                    listtrav->next = new ListNode(trav->val);
                    listtrav = listtrav->next;
                }
                trav = trav->next;
                first--;
            }
            
            vec.push_back(list->next);
        }
                
        return vec;
    }
};