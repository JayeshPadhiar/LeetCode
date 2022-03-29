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
    public ListNode rotateRight(ListNode head, int k) {
        
        int length = 0;
        
        ListNode trav = head;
        
        if(head == null)
            return null;
        
        if(head.next == null)
            return head;
        
        while(trav!=null && trav.next!=null){
            length++;
            trav=trav.next.next;
        }
        if(trav==null)
            length *= 2;
        else
            length = (length*2)+1;
        
        trav = head;
        
        
        if(k == length)
            return head;
        
        int n = (k>length)?(length-(k%length)-1):(length-k-1);
        while(n-- > 0){
            trav = trav.next;
        }
        
        ListNode tail = trav;
        
        ListNode h = new ListNode();
        ListNode t = h;
        
        System.out.println(trav.val);
        trav=trav.next;
        
        while(trav != null){
            ListNode node = new ListNode(trav.val);
            t.next = node;
            t = node;
            trav = trav.next;
        }
        
        tail.next = null;
        
        t.next = head;
        head = h.next;
        
        return head;
        
    }
}