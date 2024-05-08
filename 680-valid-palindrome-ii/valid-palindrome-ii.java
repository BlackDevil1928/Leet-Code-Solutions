class Solution {
    public boolean validPalindrome(String s) {
        int start = 0;
        int end = s.length() - 1;
        boolean checkPalindromeOnce = false; // Flag to track if we've already allowed one character to be removed

        while (start < end) {
            if (s.charAt(start) != s.charAt(end)) {
                // If characters at start and end don't match, we might need to remove one character
                checkPalindromeOnce = true;
                break; // Exit the loop as we've found a potential mismatch
            } else {
                start++;
                end--;
            }
        }

        if (checkPalindromeOnce) {
            checkPalindromeOnce = false; // Reset the flag
            int tempStart = start + 1;
            int tempEnd = end;

            // Check if removing the character at 'start' creates a palindrome
            while (tempStart < tempEnd) {
                if (s.charAt(tempStart) != s.charAt(tempEnd)) {
                    checkPalindromeOnce = true;
                    break;
                } else {
                    checkPalindromeOnce = false;
                    tempStart++;
                    tempEnd--;
                }
            }

            if (checkPalindromeOnce) {
                // If removing the character at 'start' didn't create a palindrome,
                // check if removing the character at 'end' does
                tempStart = start;
                tempEnd = end - 1;
                while (tempStart < tempEnd) {
                    if (s.charAt(tempStart) != s.charAt(tempEnd)) {
                        checkPalindromeOnce = true;
                        break;
                    } else {
                        checkPalindromeOnce = false;
                        tempStart++;
                        tempEnd--;
                    }
                }
            }

            // If either removal option creates a palindrome, return true
            if (checkPalindromeOnce)
                return false;
        }

        // If we haven't found a mismatch yet or both removal options create palindromes, return true
        return true;
    }
}
