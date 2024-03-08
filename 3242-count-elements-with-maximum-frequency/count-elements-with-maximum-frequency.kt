class Solution {
    fun maxFrequencyElements(nums: IntArray): Int {
        val mp = mutableMapOf<Int, Int>()
        for (num in nums) {
            mp[num] = mp.getOrDefault(num, 0) + 1
        }

        var count = 0
        var maxFreq = Int.MIN_VALUE
        for (freq in mp.values) {
            maxFreq = maxOf(maxFreq, freq)
        }

        for (freq in mp.values) {
            if (freq == maxFreq) {
                count += maxFreq
            }
        }
        return count
    }
}