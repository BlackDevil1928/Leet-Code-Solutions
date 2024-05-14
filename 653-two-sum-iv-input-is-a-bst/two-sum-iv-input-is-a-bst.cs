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
    // Main function to find if there are two elements in the BST that sum up to k
    public bool FindTarget(TreeNode root, int k) {
        // If the root is null, return false
        if(root is null) return false;
        // Call DFS function with the root and itself
        return DFS(root, root, k);
    }

    // DFS function to traverse the BST and find the sum
    public bool DFS(TreeNode root, TreeNode curr, int k) {
        // If the current node is null, return false
        if(curr is null) return false;
        
        // Calculate the complement of the current node's value
        int r = k - curr.val;
        
        // Search for the complement in the left subtree if the complement is less than the root value
        // Search for the complement in the right subtree if the complement is greater than the root value
        if((r < root.val && Search(root.left, curr, r)) || (r > root.val && Search(root.right, curr, r))) return true;
        
        // Recursively check the left and right subtrees
        return DFS(root, curr.left, k) || DFS(root, curr.right, k);
    }

    // Search function to find if the target value exists in the BST
    public bool Search(TreeNode root, TreeNode curr, int target) {
        // If the current node is null, return false
        if(root is null) return false;

        // If the current node's value is equal to the target and it is not the current node itself, return true
        if(root.val == target && root != curr) return true;
        
        // Recursively search in the left subtree if the target is less than the current node's value
        if(target < root.val) return Search(root.left, curr, target); 
        
        // Recursively search in the right subtree if the target is greater than the current node's value
        return Search(root.right, curr, target);
    }
}
