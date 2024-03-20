func mergeInBetween(list1 *ListNode, a int, b int, list2 *ListNode) *ListNode {
    // Create a dummy node to handle cases where the removal starts from the head of list1
    dummy := &ListNode{Val: 0, Next: list1}
    
    // Traverse to the (a-1)th node
    current := dummy
    for i := 0; i < a; i++ {
        current = current.Next
    }
    
    // Save the reference to the (a-1)th node
    beforeA := current
    
    // Traverse to the bth node
    for i := a; i <= b; i++ {
        current = current.Next
    }
    
    // Save the reference to the (b+1)th node
    afterB := current.Next
    
    // Connect the (a-1)th node to list2
    beforeA.Next = list2
    
    // Traverse to the end of list2
    for list2.Next != nil {
        list2 = list2.Next
    }

    // Connect the end of list2 to the (b+1)th node
    list2.Next = afterB

    return dummy.Next;
}