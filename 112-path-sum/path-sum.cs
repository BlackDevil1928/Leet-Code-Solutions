public class Solution
{
    public bool HasPathSum(TreeNode root, int targetSum)
    {
        // Base case: if the root is null, return false
        if (root == null)
            return false;

        // Subtract the current node's value from the target sum
        targetSum -= root.val;

        // If the current node is a leaf and its value is equal to the remaining sum, return true
        if (root.left == null && root.right == null)
            return targetSum == 0;

        // Recursively check the left and right subtrees
        return HasPathSum(root.left, targetSum) || HasPathSum(root.right, targetSum);
    }

    public int CalculateSum(TreeNode node, int targetSum)
    {
        // Base case: if the node is null, return 0
        if (node == null)
            return 0;

        // If the node is a leaf, return its value
        if (node.left == null && node.right == null)
            return node.val;

        // If the node has only a right child, calculate the sum of its right subtree
        if (node.left == null && node.right != null)
            return node.val + CalculateSum(node.right, targetSum);

        // If the node has only a left child, calculate the sum of its left subtree
        if (node.left != null && node.right == null)
            return node.val + CalculateSum(node.left, targetSum);

        // Calculate the sum of the left and right subtrees
        int leftSum = CalculateSum(node.left, targetSum);
        int rightSum = CalculateSum(node.right, targetSum);

        // Check if the sum of the current node's value and the sum of either subtree is equal to the target sum
        if (node.val + leftSum == targetSum || node.val + rightSum == targetSum)
        {
            return targetSum; // Return the target sum if found
        }
        else
        {
            return -1; // Otherwise, return -1
        }
    }
}
