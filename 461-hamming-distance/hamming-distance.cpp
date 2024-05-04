class Solution {
public:
    int hammingDistance(int x, int y) {
        // Calculate the XOR of x and y, which will result in a number with set bits
        // in positions where x and y have different bits
        int xorResult = x ^ y;
        
        // Use __builtin_popcount to count the number of set bits in the XOR result,
        // which gives the Hamming distance between x and y
        return __builtin_popcount(xorResult);
    }
};
