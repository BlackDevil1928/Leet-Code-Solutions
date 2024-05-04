class Solution {
    public boolean checkRecord(String s) {
        char[] arr = s.toCharArray(); // Convert the input string to a character array
        int a = 0, l = 0; // Initialize counters for 'A' and 'L' occurrences

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 'A') a++; // Increment 'A' counter if 'A' is found
            else if (arr[i] == 'L') { // Check for 'L' and two consecutive 'L's
                if (i + 2 < arr.length) { // Ensure there are at least two more characters ahead
                    if (arr[i + 1] == 'L' && arr[i + 2] == 'L') l += 3; // Increment 'L' counter by 3 for three consecutive 'L's
                }
            }
        }

        return (a < 2 && l < 3); // Return true if 'A' count is less than 2 and 'L' count is less than 3
    }
}
