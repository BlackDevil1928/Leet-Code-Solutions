# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        # Initialize two pointers at the heads of the two lists
        a_pointer = headA
        b_pointer = headB
        count = 0

        # Iterate until the two pointers meet (or until they both reach the end)
        while a_pointer != b_pointer:
            # Move both pointers to the next node
            a_pointer = a_pointer.next
            b_pointer = b_pointer.next
            
            # If either pointer reaches the end, move it to the head of the other list
            if a_pointer == None:
                count += 1
                if count > 1:
                    return None
                a_pointer = headB
            if b_pointer == None:
                b_pointer = headA
           
        return a_pointer
