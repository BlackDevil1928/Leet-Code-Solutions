/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    int result = 0; // Initialize a variable to store the tilt result

    public int FindTilt(TreeNode root) {
        Helper(root); // Call the helper function to calculate the tilt
        return result; // Return the final result
    }

    // Helper function to calculate the tilt of a subtree and update the result
    int Helper(TreeNode root)
    {
        if(root == null)
        {
            return 0; // Return 0 if the current node is null
        }

        // Recursively calculate the tilt of the left and right subtrees
        int left = Helper(root.left);
        int right = Helper(root.right);

        // Update the result with the absolute difference between the left and right subtree sums
        result += Math.Abs(left - right);

        // Return the sum of the current node's value and the sum of its left and right subtrees
        return left + right + root.val;
    }
}
