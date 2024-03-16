class Solution {
    fun findMaxLength(nums: IntArray): Int {
        val mp = HashMap<Int, Int>()
        var sum = 0
        var subArrayLength = 0
        for (i in nums.indices) {
            sum += if (nums[i] == 0) -1 else 1
            if (sum == 0) {
                subArrayLength = i + 1
            } else if (mp.containsKey(sum)) {
                subArrayLength = maxOf(subArrayLength, i - mp[sum]!!)
            } else {
                mp[sum] = i
            }
        }
        return subArrayLength
    }
}