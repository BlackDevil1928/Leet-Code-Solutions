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
    public int PseudoPalindromicPaths (TreeNode root) {
        return CountPseudoPalindromicPaths(root, 0);
    }

    private int CountPseudoPalindromicPaths(TreeNode node, int count) {
        if (node == null) {
            return 0;
        }

        count ^= 1 << (node.val - 1);

        if (node.left == null && node.right == null) {
            // Check if the current path is pseudo-palindromic
            return (count & (count - 1)) == 0 ? 1 : 0;
        }

        int leftPaths = CountPseudoPalindromicPaths(node.left, count);
        int rightPaths = CountPseudoPalindromicPaths(node.right, count);

        return leftPaths + rightPaths;
    }
}