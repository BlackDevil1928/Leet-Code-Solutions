/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {number}
 */
var listLength = function(head) {
    let length = 0;
    let current = head;
    while (current !== null) {
        length++;
        current = current.next;
    }
    return length;
};

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    const length = listLength(head);
    const middle = Math.floor(length / 2);
    let temp = head;
    let count = 0;
    while (count < middle) {
        temp = temp.next;
        count++;
    }
    return temp;
};