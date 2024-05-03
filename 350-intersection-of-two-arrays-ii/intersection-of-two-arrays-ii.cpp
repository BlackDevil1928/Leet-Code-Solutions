class Solution {
public:
    vector<int> intersect(vector<int>& A, vector<int>& B) {
        // Vector to store the intersection
        vector<int> C;
        // Array to store frequency of elements in A
        int f[1001]{0};
        // Calculate frequency of elements in A
        for (int e : A) {
            f[e]++;
        }
        // Check elements of B against frequency array
        for (int e : B) {
            // If element is present in A, add it to C and decrement frequency
            if (f[e]-- > 0) {
                C.push_back(e);
            }
        }
        return C; // Return the intersection
    }
};
