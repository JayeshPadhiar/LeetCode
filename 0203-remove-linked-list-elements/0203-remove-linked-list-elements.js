/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {

    while(head && head.val == val){
        head = head.next;
    }
    let trav = head;

    while(trav && trav.next){

        if(trav.next.val == val){
            let trav2 = trav.next;

            while(trav2 && trav2.val == val){
                trav2 = trav2.next;
            }

            trav.next = trav2;
            trav = trav.next;
        }else{
            trav = trav.next;
        }
    }

    return head;

};