class Solution {
    int removeDuplicates(List<int> nums) {
        // Initialize the index of the last unique element
        int lastUniqueIndex = 0;

        // Iterate over the array starting from the second element
        for (int currentIndex = 1; currentIndex < nums.length; currentIndex++) {
            // Check if the current element is different from the previous one
            if (nums[currentIndex - 1] != nums[currentIndex]) {
                // Move to the next position for the next unique element
                lastUniqueIndex++;

                // Place the new unique element at the position of the lastUniqueIndex
                nums[lastUniqueIndex] = nums[currentIndex];
            }
        }
        // The length of the unique elements is the lastUniqueIndex plus one
        return lastUniqueIndex + 1;
    }
}
