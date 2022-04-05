/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    ListNode ans = new ListNode();
    public ListNode mergeTwoLists(ListNode a, ListNode b) {
        ListNode node = null;
        
        if(a==null)
            return b;
        if(b==null)
            return a;
        
        if(a.val <= b.val){
            node = a;
            node.next = mergeTwoLists(a.next, b);
        }else{
            node = b;
            node.next = mergeTwoLists(a, b.next);
        }

        return node;
    }
}