/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var swapNodes = function(head, k) {
    let trav = head;

    while(--k){
        trav = trav.next;
    }

    let front_node = trav;
    let back_node = head;

    while(trav.next){
        trav = trav.next;
        back_node = back_node.next;
    }

    console.log(front_node.val);
    console.log(back_node.val);

    let temp = front_node.val;
    front_node.val = back_node.val;
    back_node.val = temp;

    return head;
};