class Solution {
    func findMinArrowShots(_ points: [[Int]]) -> Int {
        // Sort the balloons based on their end coordinates
        let sortedPoints = points.sorted { $0[1] < $1[1] }

        var arrows = 1
        var prevEnd = sortedPoints[0][1]

        // Count the number of non-overlapping intervals
        for i in 1..<sortedPoints.count {
            if sortedPoints[i][0] > prevEnd {
                arrows += 1
                prevEnd = sortedPoints[i][1]
            }
        }

        return arrows
    }
}