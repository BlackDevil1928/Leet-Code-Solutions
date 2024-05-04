public class Solution {
    public int GetMinimumDifference(TreeNode root) {
        var stack = new Stack<TreeNode>(); // Stack to store nodes for inorder traversal
        var diff = int.MaxValue; // Initialize the minimum difference variable

        var node = root; // Start from the root node
        TreeNode? prevNode = null; // Variable to keep track of the previous node

        // Perform inorder traversal using iterative approach
        while (node != null || stack.Any())
        {
            if (node != null)
            {
                stack.Push(node); // Push current node to the stack
                node = node.left; // Move to the left child
            }
            else
            {
                var pop = stack.Pop(); // Pop a node from the stack
                if (prevNode != null)
                {
                    diff = Math.Min(diff, pop.val - prevNode.val); // Calculate the difference between current and previous nodes
                }

                prevNode = pop; // Update the previous node
                node = pop.right; // Move to the right child
            }
        }

        return diff; // Return the minimum difference
    }
}
