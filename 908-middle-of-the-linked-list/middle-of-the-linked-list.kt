/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun listLength(head: ListNode?): Int {
        var length = 0
        var current = head
        while (current != null) {
            length++
            current = current.next
        }
        return length
    }

    fun middleNode(head: ListNode?): ListNode? {
        val length = listLength(head)
        val middle = length / 2
        var temp = head
        var count = 0
        while (count < middle) {
            temp = temp?.next
            count++
        }
        return temp
    }
}