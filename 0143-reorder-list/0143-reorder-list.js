/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {

    let stack = [];
    let trav = head;

    while(trav){
      stack.push(trav);
      trav = trav.next;
    }

    let p1 = head;
    let p2 = head.next;

    let last = stack.pop();

    while(last && last != p1 && last != p2){
      last.next = p2;
      p1.next = last;
      p1 = p2;
      p2 = p2.next;

      last = stack.pop();
    }

    last.next = null;

    return head;


    
};