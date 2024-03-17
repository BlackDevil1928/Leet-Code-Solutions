class Solution {
    fun insert(intervals: Array<IntArray>, newInterval: IntArray): Array<IntArray> {
        var i = 0
        val n = intervals.size
        val result = mutableListOf<IntArray>()
        
        while (i < intervals.size) {
            if (intervals[i][1] < newInterval[0])
                result.add(intervals[i])
            else if (intervals[i][0] > newInterval[1]){
                break
            } else {
                //Overlap : merge them
                newInterval[0] = minOf(newInterval[0], intervals[i][0])
                newInterval[1] = maxOf(newInterval[1], intervals[i][1])
            }
            i++
        }
        
        result.add(newInterval)
        while (i < n){
            result.add(intervals[i++])
        }
        
        return result.toTypedArray()
    }
}