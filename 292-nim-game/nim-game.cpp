class Solution {
public:
    bool canWinNim(int n) {
        // If the number of stones is a multiple of 4, return false (0)
        if (n % 4 == 0)
            return false;
        // Otherwise, return true (1)
        return true;
    }
};
