import java.util.HashMap

class Solution {
    fun intersection(nums1: IntArray, nums2: IntArray): IntArray {
        val map = HashMap<Int, Int>()
        for (num in nums1) {
            map[num] = map.getOrDefault(num, 0) + 1
        }
        
        val resultList = mutableListOf<Int>()
        for (num in nums2) {
            if (map.containsKey(num)) {
                resultList.add(num)
                map.remove(num)
            }
        }
        
        return resultList.toIntArray()
    }
}

