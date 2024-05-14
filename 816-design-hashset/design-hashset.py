class ListNode():
    def __init__(self, val=0, next=None, prev=None):
        self.val = val
        self.next = next
        self.prev = prev
        
class MyHashSet:
    """
    HashSet implementation using a circular doubly linked list.
    """
    def __init__(self):
        # Initialize a dummy node as both head and tail of the linked list
        dummy = ListNode(-1)
        self.head = dummy
        self.tail = dummy
        

    def add(self, key: int) -> None:
        """
        Add a new key to the HashSet if it doesn't already exist.
        """
        if not self.contains(key):
            node = ListNode(key)
            node.next = self.head
            node.prev = self.tail
            self.head.prev = node
            self.head = node
            self.tail.next = self.head

    def remove(self, key: int) -> None:
        """
        Remove a key from the HashSet if it exists.
        """
        temp = self.head
        while temp != self.tail:
            if temp.val == key:
                # Found the node to be deleted
                temp.prev.next = temp.next
                temp.next.prev = temp.prev
                
                if self.head == temp:
                    # Update self.head if necessary
                    self.head = temp.next
                del temp
                break
            temp = temp.next

    def contains(self, key: int) -> bool:
        """
        Check if a key exists in the HashSet.
        """
        temp = self.head
        while temp != self.tail:
            if temp.val == key:
                return True
            temp = temp.next
        return False
