/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun removeZeroSumSublists(head: ListNode?): ListNode? {
        var prefixSum = 0
        val mp = HashMap<Int, ListNode>()
        val dummy = ListNode(0)
        dummy.next = head
        mp[0] = dummy
        var current = head
        while (current != null) {
            prefixSum += current.`val`
            if (mp.containsKey(prefixSum)) {
                var start = mp[prefixSum]
                var temp = start
                var pSum = prefixSum
                while (temp != current) {
                    temp = temp?.next
                    pSum += temp?.`val` ?: 0
                    if (temp != current)
                        mp.remove(pSum)
                }
                start?.next = current.next
            } else {
                mp[prefixSum] = current
            }
            current = current.next
        }
        return dummy.next
    }
}