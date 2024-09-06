class Solution {
    fun modifiedList(nums: IntArray, head: ListNode?): ListNode? {
        val deletedNodes = nums.toSet()
        val sudoHead = ListNode(0)
        sudoHead.next = head
        var curNode = sudoHead
        while(curNode != null && curNode.next != null) {
            if (deletedNodes.contains(curNode.next.`val`)) {
                curNode.next = curNode.next.next
            } else {
                curNode = curNode.next
            }
        }
        return sudoHead.next
    }
}