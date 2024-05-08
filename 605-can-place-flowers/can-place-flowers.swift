class Solution {
    // Main method to check if flowers can be placed in the flowerbed
    func canPlaceFlowers(_ flowerbed: [Int], _ n: Int) -> Bool {
        var n = n, flowerbed = flowerbed

        // Iterate over the flowerbed
        for i in flowerbed.indices where isEnable(i, flowerbed) {
            // Place a flower at index i and decrement n
            flowerbed[i] = 1
            n -= 1
        }

        // Return true if all flowers can be placed, otherwise false
        return n <= 0
    }

    // Helper method to check if a flower can be placed at index i
    func isEnable(_ i: Int, _ array: [Int]) -> Bool {
        // Check if index i is empty and adjacent positions are also empty
        array[i] == 0 && isEnable_(i+1, array) && isEnable_(i-1, array)
    }

    // Helper method to check if an index i is within bounds and not already containing a flower
    func isEnable_(_ i: Int, _ array: [Int]) -> Bool {
        // Check if index i is within bounds and not already containing a flower
        guard array.indices.contains(i) else { return true }
        return array[i] != 1
    }
}
