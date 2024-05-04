class Solution {
public:
    // Function to reverse a substring of string s from index l to r
    void reverse(string &s, int l, int r) {
        for (size_t i = l, j = r; i < j; i++, j--) {
            swap(s[i], s[j]); // Swap characters at indices i and j
        }
    } 
    
    string reverseStr(string s, int k) {
        bool flag = true; // Flag to alternate reversing and skipping k characters
        
        for (int i = 0; i < s.size(); i += k) {
            if (flag) { // If flag is true, reverse the next k characters
                if (i + k - 1 >= s.size()) // Check if the end index is out of bounds
                    reverse(s, i, s.size() - 1); // Reverse the remaining characters
                else
                    reverse(s, i, i + k - 1); // Reverse the next k characters
                flag = false; // Set flag to false to skip the next k characters
            } else {
                flag = true; // Set flag to true to reverse the next k characters
            }
        }
        
        return s; // Return the modified string
    }
};
