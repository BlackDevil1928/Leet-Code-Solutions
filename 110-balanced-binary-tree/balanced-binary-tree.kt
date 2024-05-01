/**
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    // Function to check if a binary tree is balanced
    fun isBalanced(root: TreeNode?): Boolean {
        // Base case: an empty tree is balanced
        if (root == null) {
            return true
        }

        var isBalanced = true

        // Function to calculate the height of a node
        fun height(node: TreeNode): Int {
            // If the node has no children, its height is 1
            if (node.left == null && node.right == null) {
                return 1
            }

            // Calculate the height of the left subtree
            val leftHeight = if (node.left != null) {
                height(node.left!!)
            } else {
                0
            }

            // Calculate the height of the right subtree
            val rightHeight = if (node.right != null) {
                height(node.right!!)
            } else {
                0
            }

            // If the absolute difference in heights is greater than 1, the tree is unbalanced
            if (Math.abs(leftHeight - rightHeight) > 1) {
                isBalanced = false
            }

            // Return the height of the current node
            return Math.max(leftHeight, rightHeight) + 1
        }

        // Calculate the height of the root node
        height(root)

        // Return whether the tree is balanced
        return isBalanced
    }
}
