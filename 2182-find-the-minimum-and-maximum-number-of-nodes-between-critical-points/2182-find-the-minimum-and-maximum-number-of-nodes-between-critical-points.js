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

    while(last){
        if((mid.val > first.val && mid.val > last.val) || (mid.val < first.val && mid.val < last.val)){
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
        let len = indexes.length-1;
        let min = indexes[1]-indexes[0];

        let i = 0;

        while(i+1 <= len){
            let diff = indexes[i+1] - indexes[i]
            if(diff < min){
                min = diff;
            }
            i++;
        }

        let max = indexes[len] - indexes[0];
        return [min, max];
    }
    
};