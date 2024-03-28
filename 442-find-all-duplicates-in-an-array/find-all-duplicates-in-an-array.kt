class Solution {
    fun findDuplicates(nums: IntArray): List<Int> {
        val result = mutableListOf<Int>()
        val n = nums.size
        for (i in 0 until n) {
            val num = Math.abs(nums[i])
            val idx = num - 1
            if (nums[idx] < 0)
                result.add(num)
            nums[idx] *= -1
        }
        return result
    }
}