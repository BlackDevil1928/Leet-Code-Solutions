type KthLargest struct {
    k    int
    nums []int
}

// Constructor initializes the KthLargest struct with the given k and nums array.
func Constructor(k int, nums []int) KthLargest {
    // Sort the nums array in ascending order
    sort.Ints(nums)
    // If the length of nums is greater than k, keep only the k largest elements
    if len(nums) > k {
        nums = nums[len(nums)-k:]
    }
    // Return a new instance of KthLargest with k and nums set
    return KthLargest{
        k,
        nums,
    }
}

// Add adds a new element to the KthLargest struct and returns the kth largest element.
func (this *KthLargest) Add(val int) int {
    // Add the new element to the nums array using the push function
    this.nums = push(this.nums, val)
    // If the length of nums is greater than k, remove the smallest element
    if len(this.nums) > this.k {
        this.nums = this.nums[1:]
    }
    // Return the kth largest element, which is the first element in the sorted nums array
    return this.nums[0]
}

// push inserts a new element into a sorted array while keeping it sorted.
func push(queue []int, newQueue int) []int {
    // Find the correct position to insert the new element in the sorted array
    index := len(queue)
    for index > 0 && queue[index-1] > newQueue {
        index--
    }
    // Insert the new element at the correct position
    // If it's the first element, insert it at the beginning
    if index == 0 {
        queue = append([]int{newQueue}, queue...)
        return queue
    }
    // If it's the last element, insert it at the end
    if index == len(queue) {
        queue = append(queue, newQueue)
        return queue
    }
    // If it's not the first or last index, insert it at the correct position and shift other elements
    queue = append(queue[:index+1], queue[index:]...)
    queue[index] = newQueue
    return queue
}
