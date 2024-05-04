public class Solution {
    public int[] ConstructRectangle(int area) {
        // Calculate the square root of the area
        int lop = (int)Math.Sqrt(area);
        // Initialize an array to store the result
        int[] comb = new int[2];
        // Variable to store temporary values during swapping
        int swap;

        // Iterate from the square root downwards
        for (int i = lop; ; i--) {
            // Check if the current number divides the area evenly
            if (area % i == 0) {
                // If it does, set the dimensions in the result array
                comb[0] = i;
                comb[1] = area / i;
                // Ensure the larger dimension is at index 0
                if (comb[0] < comb[1]) {
                    swap = comb[0];
                    comb[0] = comb[1];
                    comb[1] = swap;
                }
                // Return the result array
                return comb;
            }
        }
    }
}
