/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function binaryTreePaths(root: TreeNode | null): string[] {
    const result = []

    // Function to check if a node is a leaf
    const isLeaf = (branch: TreeNode) => !branch.left && !branch.right

    // Possible sides of a node in the tree
    const sides = ['left', 'right']

    // Backtracking function to find paths
    const backtrack = (base = `${root.val}`, branch = root) => {
        if (isLeaf(branch)) return result.push(base)

        // Explore each side (left and right) if they exist
        for (const side of sides) 
            if (branch[side]) backtrack(base + '->' + branch[side].val, branch[side])
    }

    // Start the backtracking from the root
    backtrack()

    return result
};
