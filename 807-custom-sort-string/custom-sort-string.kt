class Solution {
    fun customSortString(order: String, s: String): String {
        val result = StringBuilder()
        val mp = HashMap<Char, Int>()
        for (char in s) {
            mp[char] = mp.getOrDefault(char, 0) + 1
        }
        for (char in order) {
            if (mp.containsKey(char)) {
                result.append(char.toString().repeat(mp[char] ?: 0))
                mp.remove(char)
            }
        }
        for ((char, count) in mp) {
            result.append(char.toString().repeat(count))
        }
        return result.toString()
    }
}