class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i, len = 1, maxlen = 1; // Initialize variables for current length and maximum length

        // Iterate through the array starting from the second element
        for (i = 1; i < nums.size(); i++) {
            // Check if the current element is greater than the previous one
            if (nums[i] > nums[i - 1]) {
                len++; // Increment the current length if the sequence is increasing
            } else if (len > maxlen) { // If the sequence ends and the current length is greater than the maximum length
                maxlen = len; // Update the maximum length
                len = 1; // Reset the current length
            } else {
                len = 1; // Reset the current length if the sequence ends and it's not greater than the maximum length
            }
        }

        // Check if the current length is greater than the maximum length after the loop ends
        if (len > maxlen) {
            maxlen = len; // Update the maximum length if necessary
        }

        return maxlen; // Return the maximum length of the increasing continuous subsequence
    }
};
