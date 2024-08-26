class Solution {
    List<Integer> res = new ArrayList<>();
    
    public List<Integer> postorder(Node root) {
        // Call the helper function to perform postorder traversal
        postOrderTraversal(root);
        return res;
    }
    
    private void postOrderTraversal(Node root) {
        // Base case: If the current node is null, return
        if(root == null) return;
        
        // Recursively traverse each child node
        for(Node child : root.children) {
            postOrderTraversal(child);
        }
        
        // Add the value of the current node to the result list
        res.add(root.val);
    }
}
