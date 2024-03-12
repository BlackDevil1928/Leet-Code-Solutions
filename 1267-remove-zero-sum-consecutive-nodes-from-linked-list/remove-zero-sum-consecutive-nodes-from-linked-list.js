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
var removeZeroSumSublists = function(head) {
    let prefixSum = 0;
    const mp = new Map();
    const dummy = new ListNode(0);
    dummy.next = head;
    mp.set(0, dummy);
    while (head) {
        prefixSum += head.val;
        if (mp.has(prefixSum)) {
            let start = mp.get(prefixSum);
            let temp = start;
            let pSum = prefixSum;
            while (temp !== head) {
                temp = temp.next;
                pSum += temp.val;
                if (temp !== head)
                    mp.delete(pSum);
            }
            start.next = head.next;
        } else {
            mp.set(prefixSum, head);
        }
        head = head.next;
    }
    return dummy.next;
};