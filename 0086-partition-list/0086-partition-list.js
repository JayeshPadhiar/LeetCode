/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function(head, x) {

    let a = new ListNode(0);
    let ans = a;
    let greater = new ListNode(0);
    let b = greater;
    

    while(head){
        if(head.val < x){
            a.next = head;
            a = a.next;
        }else{
            b.next = head;
            b = b.next;
        }

        head = head.next;
    }
    b.next = null;

    a.next = greater.next;

    return ans.next;
    
};