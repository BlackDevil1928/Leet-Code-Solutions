/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var averageOfLevels = function(root) {
    
};/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

/**
 * @param {TreeNode} root - The root of the binary tree.
 * @return {number[]} - An array containing the average value of each level in the binary tree.
 */
var averageOfLevels = function(root) {
    // Initialize a queue to store nodes of each level.
    let que = [];
    // Push the root node into the queue to start the traversal.
    que.push(root);
    // Initialize an array to store the average values of each level.
    var ans = [];
    // Continue the traversal until all levels are processed.
    while (que.length) {
        // Get the number of nodes in the current level.
        var ln = que.length;
        // Initialize a variable to store the sum of values in the current level.
        let sum = 0;
        // Process all nodes in the current level.
        for (let i = 0; i < ln; i++) {
            // Remove the first node from the queue.
            let curr = que.shift();
            // Add the value of the current node to the sum.
            sum += curr.val;
            // If the current node has a left child, add it to the queue.
            if (curr.left) {
                que.push(curr.left);
            }
            // If the current node has a right child, add it to the queue.
            if (curr.right) {
                que.push(curr.right);
            }
        }
        // Calculate the average value of the current level and add it to the result array.
        ans.push(sum / ln);
    }
    // Return the array containing the average values of each level.
    return ans;
};
