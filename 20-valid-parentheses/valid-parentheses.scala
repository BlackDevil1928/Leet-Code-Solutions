object Solution {
  def isValid(s: String): Boolean = {
    // Create a mutable stack to store opening brackets
    val stack = collection.mutable.Stack[Char]()
    
    // Iterate over each character in the string
    s.forall {
      case '(' => stack.push(')'); true  // If character is '(', push ')' to stack
      case '{' => stack.push('}'); true  // If character is '{', push '}' to stack
      case '[' => stack.push(']'); true  // If character is '[', push ']' to stack
      case other if stack.nonEmpty => stack.pop() == other  // If character is a closing bracket, pop from stack and check if it matches
      case _ => false  // If character is invalid, return false
    } && stack.isEmpty  // Check if stack is empty (all brackets matched)
  }
}
