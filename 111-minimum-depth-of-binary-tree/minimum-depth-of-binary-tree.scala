import math.min

object Solution {
  def minDepth(root: TreeNode): Int = {
    if (root == null){
      0
    } else {
      (minDepth(root.left), minDepth(root.right)) match {
        case (0, 0) => 1
        case (0, r) => r + 1
        case (l, 0) => l + 1
        case (l, r) => min(l,r) + 1 
      }
    }
  }
}