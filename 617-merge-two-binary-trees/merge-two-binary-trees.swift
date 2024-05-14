class Solution {
    func mergeTrees(_ t1: TreeNode?, _ t2: TreeNode?) -> TreeNode? {
        // If t1 is nil, return t2
        guard let left = t1 else {
            return t2
        }
        
        // If t2 is nil, return t1
        guard let right = t2 else {
            return t1
        }
        
        // Create a new TreeNode with the sum of t1 and t2 values
        var node = TreeNode(left.val + right.val)
        // Recursively merge the left subtrees
        node.left = mergeTrees(left.left, right.left)
        // Recursively merge the right subtrees
        node.right = mergeTrees(left.right, right.right)
        // Return the merged tree
        return node
    }
}
