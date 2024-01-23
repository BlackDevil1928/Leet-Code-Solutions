class Solution {
    
  fun maxLength(arr: List<String>): Int {
    val sets = arr.filter { it.toSet().size == it.length }
    fun dfs(i: Int, s: Set<Char>): Int = if (i == sets.size) 0
      else max(
        if (sets[i].any { it in s }) 0 else
        sets[i].length + dfs(i + 1, s + sets[i].toSet()),
        dfs(i + 1, s)
      )
    return dfs(0, setOf())
  }
}