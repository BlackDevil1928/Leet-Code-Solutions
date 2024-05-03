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
 * @return {number}
 */
var countNodes = function (root) {
	if (!root) {
		return 0;
	}

	const countRight = countNodesByLevel(root, 'right');
	const countLeft = countNodesByLevel(root, 'left');

	// Count
	if (countRight === countLeft) {
		return countRight;
	}

	/**
	 * right nodes + left nodes + the root
	 */
	return countNodes(root.right) + countNodes(root.left) + 1;
    //return countNodes(root.left) + countNodes(root.right) + 1;
};

/**
 * Count the nodes by level by traversing in the passed direction only.
 * @param {TreeNode | null} root
 * @param {'right' | 'left'} dir
 */
function countNodesByLevel(root, dir) {
	let levels = 0;
	let node = root;

	while (node) {
		node = node[dir];
		levels++;
	}

	return Math.pow(2, levels) - 1;
}
