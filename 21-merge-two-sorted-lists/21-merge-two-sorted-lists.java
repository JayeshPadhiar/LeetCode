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
        
        ListNode node = new ListNode();
        ListNode trav = node;
        
        while(a!=null && b!=null){
            if(a.val < b.val){
                trav.next = new ListNode(a.val);
                a = a.next;
            }else{
                trav.next = new ListNode(b.val);
                b = b.next;
            }
            trav = trav.next;
        }
        
        if(a == null)
            trav.next = b;
        else
            trav.next = a;
        
        return node.next;
    }
}