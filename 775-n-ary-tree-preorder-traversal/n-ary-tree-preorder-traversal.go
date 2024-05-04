/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Children []*Node
 * }
 */

func preorder(root *Node) []int {
    var order []int

    // Define a recursive function to traverse the tree in preorder
    var rec func(*Node)
    rec = func(n *Node) {
        // Base case: if the current node is nil, return
        if n == nil {
            return
        }
        // Append the value of the current node to the result slice
        order = append(order, n.Val)
        // Recursively call the function for each child of the current node
        for _, ch := range n.Children {
            rec(ch)
        }
    }

    // Call the recursive function starting from the root node
    rec(root)
    return order // Return the result slice
}
