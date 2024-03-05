/**
 * @param {string} s
 * @return {number}
 */
var minimumLength = function(s) {
    let l = 0, r = s.length - 1;
    while (l < r && s[l] === s[r]) {
        let ch = s[l];
        while (l <= r && s[l] === ch) l++;
        while (l <= r && s[r] === ch) r--;
    }
    return  r - l + 1;
};