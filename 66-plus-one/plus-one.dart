class Solution {
  List<int> plusOne(List<int> digits) {
    // Iterate over the digits in reverse order
    for (int i = digits.length - 1; i >= 0; i--) {
      // If the current digit is less than 9, increment it and return the updated list
      if (digits[i] < 9) {
        digits[i]++;
        return digits;
      } else {
        // Otherwise, set the current digit to 0 and continue to the next digit
        digits[i] = 0;
      }
    }
    // If all digits were 9, add 1 to the beginning of the list
    digits.insert(0, 1);
    return digits;
  }
}
