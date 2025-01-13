/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number[]}
 */
var nodesBetweenCriticalPoints = function(head) {

    if(!head || !head.next || !head.next.next){
        return [-1, -1];
    }

    let first=head, mid=head.next, last=head.next.next;

    let index = 2;
    let indexes = [];

    let min = 100000;

    while(last){
        if((mid.val > first.val && mid.val > last.val) || (mid.val < first.val && mid.val < last.val)){
            min = (indexes.length)? Math.min(min, index - indexes[indexes.length-1]) : min;
            indexes.push(index);
        }

        first = mid;
        mid = last;
        last = last.next;
        index++;
    }

    if(indexes.length < 2){
        return [-1,-1];
    }else{
        return [min, indexes[indexes.length-1] - indexes[0]];
    }
    
};