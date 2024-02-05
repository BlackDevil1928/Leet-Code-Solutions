/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    // Create an object to store character frequencies
    const freqMap = {};
    
    // Count character frequencies
    for (const char of s) {
        freqMap[char] = (freqMap[char] || 0) + 1;
    }
    
    // Find the first unique character
    for (let i = 0; i < s.length; ++i) {
        if (freqMap[s[i]] === 1) {
            return i;
        }
    }
    
    // If no unique character is found
    return -1;
};