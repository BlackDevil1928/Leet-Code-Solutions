/**
 * Definition for a binary tree node.
 * class TreeNode(_value: Int = 0, _left: TreeNode = null, _right: TreeNode = null) {
 *   var value: Int = _value
 *   var left: TreeNode = _left
 *   var right: TreeNode = _right
 * }
 */
object Solution {
  def pseudoPalindromicPaths(root: TreeNode): Int = {
    var bits = 0
    var count = 0
    def dfs(node: TreeNode): Unit = {
      if (node == null) return
      bits = bits ^ (1 << node.value)
      if (node.left == null && node.right == null) {
        if (isPseudoPalindromic(bits)) count += 1
      } else {
        dfs(node.left)
        dfs(node.right)
      }
      bits = bits ^ (1 << node.value)
    }
    dfs(root)
    count
  }

  private def isPseudoPalindromic(bits: Int): Boolean = {
    bits == 0 || (bits & (bits - 1)) == 0
  }
}