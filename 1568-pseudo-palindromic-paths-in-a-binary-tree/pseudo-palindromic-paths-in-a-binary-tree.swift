class Solution {

    private var paths = 0
    
    func pseudoPalindromicPaths (_ root: TreeNode?) -> Int {
        guard let root = root else {
            return -1
        }
        
        var set = Set<Int>()
        traverse(root, set)
        return paths
    }
    
    private func traverse(_ node: TreeNode, _ set: Set<Int>) {
        var set = set
        if set.contains(node.val) {
            set.remove(node.val)
        } else {
            set.insert(node.val)
        }
        
        if node.left == nil && node.right == nil {
            if set.count == 0 || set.count == 1 {
                paths += 1
            }
            return
        }
        
        if let left = node.left {
            traverse(left, set)
        }
        
        if let right = node.right {
            traverse(right, set)
        }
    }
}