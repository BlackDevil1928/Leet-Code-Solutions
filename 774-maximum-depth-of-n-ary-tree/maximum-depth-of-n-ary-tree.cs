public class Solution {
    public int MaxDepth(Node root) {
        // Base case: If the root is null, return 0
        if (root == null) return 0;

        // Recursive case: Calculate the maximum depth of children
        var max = root.children.Any() ? root.children.Max(MaxDepth) : 0;
        
        // Return the maximum depth of children plus 1 (for the root node itself)
        return max + 1;
    }
}