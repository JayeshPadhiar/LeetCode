/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right) {

    if(!head){
        return;
    }

    let trav = head;
    let stack = [];
    let index = 1;

    while(trav){
        if(index >= left && index <=right){
            stack.push(trav.val);
        }
        index++;
        trav = trav.next;
    }

    trav = head;
    index = 1;

    while(trav){
        if(index >= left && index <=right){
            trav.val = stack.pop();
        }
        index++;
        trav = trav.next; 
    }

    return head;
    
};