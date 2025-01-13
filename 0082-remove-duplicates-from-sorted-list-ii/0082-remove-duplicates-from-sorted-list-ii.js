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
        let isDuplicate = false;

        while(y.next && y.next.val == y.val){
            isDuplicate = true;
            y = y.next;
        }

        if(isDuplicate){
            y = y.next;
        }

        x.next = y;

        if(y && y.next && y.val == y.next.val){
            continue;
        }
        
        x = x.next;

        if(y){
            y = y.next;
        }
        
    }

    return ans.next;



};