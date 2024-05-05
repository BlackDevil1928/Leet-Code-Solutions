import "sort"

func findSecondMinimumValue(root *TreeNode) int {
    q, array := []*TreeNode{root}, []int{} // Initialize a queue and an array to store values

    // Perform a level order traversal using a queue
    for len(q) != 0 {
        node := q[0] // Dequeue the first node
        q = q[1:]

        array = append(array, node.Val) // Add the value of the node to the array

        // Enqueue the left and right child nodes if they exist
        if node.Left != nil {
            q = append(q, node.Left)
        }

        if node.Right != nil {
            q = append(q, node.Right)
        }
    }

    sort.Ints(array) // Sort the array in ascending order

    prev := array[0] // Initialize a variable to store the previous value

    // Iterate through the sorted array to find the second minimum value
    for _, v := range array {
        if v != prev {
            return v // Return the second minimum value
        }
    }

    return -1 // Return -1 if the second minimum value is not found
}
