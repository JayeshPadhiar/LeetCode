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
    public ListNode swapNodes(ListNode head, int k) {
        
        ListNode trav = new ListNode(0,head);
        ListNode left = trav;
        ListNode right = trav;
        
        while(k-->=1)
            trav = trav.next;
        
        left = trav;
        
        while(trav != null){
            trav = trav.next;
            right = right.next;
        }
        
        int temp = left.val;
        left.val = right.val;
        right.val = temp;
        
        return head; 
    }
}