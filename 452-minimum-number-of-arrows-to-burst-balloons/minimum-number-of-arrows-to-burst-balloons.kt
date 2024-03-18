class Solution {
    fun findMinArrowShots(points: Array<IntArray>): Int {
        // Sort the balloons based on their end coordinates
        points.sortBy { it[1] }

        var arrows = 1
        var prevEnd = points[0][1]

        // Count the number of non-overlapping intervals
        for (i in 1 until points.size) {
            if (points[i][0] > prevEnd) {
                arrows++
                prevEnd = points[i][1]
            }
        }

        return arrows
    }
}