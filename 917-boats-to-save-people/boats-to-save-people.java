import java.util.*;

class Solution {
    public int numRescueBoats(int[] people, int limit) {
        // Sort the array of people's weights
        Arrays.sort(people);
        
        int boatCount = 0; // Variable to store the number of boats needed
        int left = 0, right = people.length - 1; // Pointers for the heaviest and lightest people
        
        // Iterate until all people have been considered
        while (left <= right) {
            // If the sum of weights of the heaviest and lightest person is within the limit
            if (people[left] + people[right] <= limit) {
                left++; // Move to the next lightest person
                right--; // Move to the next heaviest person
            } else {
                right--; // If the sum exceeds the limit, move only the heaviest person
            }
            boatCount++; // Increment the boat count for each iteration
        }
        
        return boatCount; // Return the total number of boats needed
    }
}
