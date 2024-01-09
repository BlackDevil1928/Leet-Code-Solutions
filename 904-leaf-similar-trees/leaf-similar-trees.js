/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function(root1, root2) {
    const dfs = (root) => {
            // If the current node is null, return an empty array
            if (root === null) {
                return [];
            }

            // Recursively explore the left and right children, and accumulate leaf values
            const leaves = dfs(root.left).concat(dfs(root.right));

            // If 'leaves' is empty, it means this is a leaf node, so return its value
            // Otherwise, it means this is an internal node and 'leaves' contains its subtree's leaves
            return leaves.length > 0 ? leaves : [root.val];
        };

        // Compare the leaf value sequences of both trees
        return JSON.stringify(dfs(root1)) === JSON.stringify(dfs(root2));
};