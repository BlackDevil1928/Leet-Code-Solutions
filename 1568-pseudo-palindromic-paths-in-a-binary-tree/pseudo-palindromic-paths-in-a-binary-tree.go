/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func pseudoPalindromicPaths (root *TreeNode) int {
    return dfs(root, make(map[int]bool, 0))
}

func dfs(root *TreeNode, mem map[int]bool) int {
    if root == nil {
        return 0
    }
    
    mem[root.Val] = !mem[root.Val]
    if root.Left == nil && root.Right == nil {
        count := 0
        for _, v := range mem {
            if v {
                count += 1
            }
        }
        
        mem[root.Val] = !mem[root.Val]
        
        if count <= 1 {
            return 1
        }
        
        return 0
    }
    
    total := dfs(root.Left, mem) + dfs(root.Right, mem)
    mem[root.Val] = !mem[root.Val]
    
    return total
}