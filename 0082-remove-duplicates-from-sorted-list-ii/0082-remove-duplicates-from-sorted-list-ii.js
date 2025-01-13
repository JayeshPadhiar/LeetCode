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

    let x = new ListNode(-1000, head);
    let ans = x;
    let y = head;

    while(y){
        if(y.next && y.next.val == y.val){
            while(y.next && y.next.val == y.val){
                y = y.next;
            }
            x.next = y.next;
        }else{
            x = x.next;
        }
        y = y.next;
    }

    return ans.next;



};