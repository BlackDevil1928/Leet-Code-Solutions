def delete_duplicates(head)
  current_node = head
  before_node = nil
  head_of_sequence = nil
  while current_node
    # Check if the value of the current node is equal to the value of the previous node
    if before_node && before_node.val == current_node.val
      # If so, link the previous node to the next node, effectively removing the current node
      before_node.next = current_node.next
    else
      # If not, update the before_node to the current_node
      before_node = current_node
    end
    # Move to the next node in the list
    current_node = current_node.next
  end
  # Return the head of the list after removing duplicates
  head
end
