# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize a pointer to the head of the list
        current = head
        
        # Traverse the list
        while current is not None and current.next is not None:
            if current.val == current.next.val:
                # Skip the next node by updating the 'next' pointer
                current.next = current.next.next
            else:
                # Move to the next node
                current = current.next
        
        return head
