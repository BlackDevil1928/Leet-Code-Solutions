class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) // If the strings are equal
            return -1; // Return -1 as there is no uncommon subsequence
        int n = max(a.length(), b.length()); // Otherwise, return the length of the longer string
        return n;
    }
};
