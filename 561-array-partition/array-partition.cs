public class Solution {
    public int ArrayPairSum(int[] nums) {
        Array.Sort(nums); // Sort the array in ascending order
        int finalSum = 0; // Initialize the final sum
        
        // Iterate through the sorted array with a step of 2
        for(int i = 0; i < nums.Length; i += 2)
        {
            finalSum += nums[i]; // Add the current element to the final sum
        }
        
        return finalSum; // Return the final sum
    }
}
