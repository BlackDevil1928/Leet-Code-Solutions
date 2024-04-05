/**
 * @param {string} s
 * @return {string}
 */
var makeGood = function(s) {
    let sb = s;
    let flag = 0;
    while (flag === 0 && sb.length > 0) {
        flag = 1;
        for (let i = 0; i < sb.length - 1; i++) {
            if (isGreat(sb, i)) { 
                sb = sb.substring(0, i) + sb.substring(i + 2);
                flag = 0;
                break; 
            }
        }
    }
    return sb;
}

function isGreat(sb, i) { // Changed the function declaration to standalone

    return Math.abs(sb.charCodeAt(i) - sb.charCodeAt(i + 1)) === 32;
}