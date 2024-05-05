class Solution {
    public int countBinarySubstrings(String s) {
    int prevRunLength = 0, curRunLength = 1, ans = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s.charAt(i) == s.charAt(i - 1)) {
            curRunLength++; // Increment the current run length if the current character is the same as the previous character
        } else {
            prevRunLength = curRunLength; // Update the previous run length with the current run length
            curRunLength = 1; // Reset the current run length to 1
        }
        if (prevRunLength >= curRunLength) {
            ans++; // If the previous run length is greater than or equal to the current run length, increment the answer
        }
    }
    return ans; // Return the final answer
}

}