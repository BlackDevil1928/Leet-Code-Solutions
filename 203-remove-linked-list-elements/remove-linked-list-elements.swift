class Solution {

    /**
     * Removes all elements from a linked list of integers that have a specific value.
     *
     * @param head The head of the linked list.
     * @param val The value to remove.
     * @return The head of the modified linked list.
     */
    func removeElements(_ head: ListNode?, _ val: Int) -> ListNode? {
        var dummy = ListNode(0)
        dummy.next = head
        var previous = dummy
        while let current = previous.next {
            if current.val == val {
                previous.next = current.next
            } else {
                previous = current
            }
        }
        return dummy.next
    }
}
