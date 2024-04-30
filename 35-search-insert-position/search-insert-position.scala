object Solution {
    def searchInsert(nums: Array[Int], target: Int): Int = {
        val a = nums.indexOf(target) // Find the index of the target if it exists in the array
        if (a != -1) return a // If target exists, return its index
        else nums.filter(_ < target).length // If target doesn't exist, return the number of elements less than target
    }
}
