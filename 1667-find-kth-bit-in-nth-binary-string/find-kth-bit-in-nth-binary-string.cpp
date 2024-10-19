class Solution {
public:
    char findKthBit(int n, int k) {
        // Initialize the binary string starting with '0'
        std::string bits = "0";
        
        // Loop to generate the sequence n times
        for (int i = 1; i < n; i++) {
            std::string newBits = "1"; // Start newBits with '1'
            int size = bits.size();
            
            // Invert and reverse the bits string
            for (int j = size - 1; j >= 0; j--) {
                newBits += (bits[j] == '1') ? '0' : '1'; // Flip the bit
            }
            
            // Concatenate newBits to the original bits string
            bits += newBits;
        }
        
        // Return the k-th bit (1-based index, so subtract 1)
        return bits[k - 1];
    }
};
