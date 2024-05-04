class Solution {
    func distributeCandies(_ candies: [Int]) -> Int {
        // Create a set to store unique candies
        var set = Set<Int>()
        
        // Iterate through the candies and add them to the set
        for can in candies {
            set.insert(can)
        }
        
        // Return the minimum of the number of unique candies and half the total number of candies
        return min(set.count, candies.count/2)
    }
}
