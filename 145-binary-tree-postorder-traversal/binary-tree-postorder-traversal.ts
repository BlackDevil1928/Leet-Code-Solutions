/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function postorderTraversal(root: TreeNode | null): number[] {
    // Define a recursive function to perform postorder traversal
    function postOrder(root: TreeNode | null, result: number[]): number[] {
        if (!root) {
            return result; // If the current node is null, return the result array
        }

        postOrder(root.left, result); // Recursively traverse the left subtree
        postOrder(root.right, result); // Recursively traverse the right subtree

        result.push(root.val); // Push the value of the current node to the result array

        return result; // Return the updated result array
    }

    // Call the recursive function with the root node and an empty array as the initial result
    return postOrder(root, []);
}
