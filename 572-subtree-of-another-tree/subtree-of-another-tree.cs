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
    // Check if 'subRoot' is a subtree of 'root'
    public bool IsSubtree(TreeNode root, TreeNode subRoot)
    {
        // If 'root' is null, 'subRoot' cannot be a subtree
        if (root == null) return false;
        
        // If 'subRoot' is the same as 'root', return true
        if (IsSameTree(root, subRoot)) return true;
        
        // Check if 'subRoot' is a subtree of the left or right child of 'root'
        return IsSubtree(root.left, subRoot) || IsSubtree(root.right, subRoot);
    }
    
    // Check if two trees 'p' and 'q' are the same
    public bool IsSameTree(TreeNode p, TreeNode q)
    {
        // If both 'p' and 'q' are null, they are the same
        if (p == null && q == null)
            return true;
        
        // If one of 'p' or 'q' is null but the other is not, they are not the same
        if (p == null || q == null)
            return false;
        
        // If the values of 'p' and 'q' are different, they are not the same
        if (p.val != q.val)
            return false;
        
        // Check if the left and right subtrees of 'p' and 'q' are the same
        return IsSameTree(p.left, q.left) && IsSameTree(p.right, q.right);
    }
}
