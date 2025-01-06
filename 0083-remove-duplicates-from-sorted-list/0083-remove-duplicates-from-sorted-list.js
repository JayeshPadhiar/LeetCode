/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {

    let trav = head;
    let lastNode = head;

    while(trav){
        if(lastNode.val != trav.val){
            lastNode.next = trav;
            lastNode = lastNode.next;
        }
        trav = trav.next
    }

    if(lastNode){
        lastNode.next = null;
    }


    return head;
    
};