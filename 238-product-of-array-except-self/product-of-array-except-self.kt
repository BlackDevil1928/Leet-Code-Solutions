class Solution {
    fun productExceptSelf(nums: IntArray): IntArray {
        val n = nums.size
        val left = IntArray(n) { 1 }
        val right = IntArray(n) { 1 }

        for (i in 1 until n) {
            left[i] = left[i - 1] * nums[i - 1]
        }

        for (i in n - 2 downTo 0) {
            right[i] = right[i + 1] * nums[i + 1]
        }

        val result = IntArray(n) { 0 }
        for (i in 0 until n) {
            result[i] = left[i] * right[i]
        }

        return result
    }
}
