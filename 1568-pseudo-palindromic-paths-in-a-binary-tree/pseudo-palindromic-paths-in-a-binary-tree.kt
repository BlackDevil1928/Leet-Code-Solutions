/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {

  fun pseudoPalindromicPaths (root: TreeNode?): Int {
    fun dfs(n: TreeNode?, freq: Int): Int = n?.run {
      val f = freq xor (1 shl `val`)
      if (left == null && right == null) {
        if (f and (f - 1) == 0) 1 else 0
      } else dfs(left, f) + dfs(right, f)
    } ?: 0
    return dfs(root, 0)
  }
}