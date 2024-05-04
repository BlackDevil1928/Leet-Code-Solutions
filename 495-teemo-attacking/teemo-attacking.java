class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        // Initialize the result variable to store the total poisoned duration
        int result = 0;

        // Iterate through the time series
        for (int i = 0; i < timeSeries.length; i++) {
            // Initialize j to the next element after i and first to the current index i
            int j = i + 1;
            int first = i;

            // While j is within the array bounds and the current duration covers the next element
            while (j < timeSeries.length && timeSeries[i] + duration >= timeSeries[j]) {
                j++; // Move to the next element
                i++; // Increment i to skip the next element since it's covered by the current duration
            }

            // If no new element was covered by the current duration, add the full duration
            if (first == i) {
                result += duration;
            } else {
                // Otherwise, add the difference between the last covered element and the first covered element
                result += (timeSeries[j - 1] + duration - timeSeries[first]);
                i = j - 1; // Move i to the last covered element
            }
        }

        return result; // Return the total poisoned duration
    }
}
