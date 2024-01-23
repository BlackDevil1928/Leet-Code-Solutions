class Solution {
    func maxLength(_ arr: [String]) -> Int {
        // Filter out strings with repeated characters as we can never use them.
        let sets: [Set<Character>] = arr.compactMap {
            let characterSet = Set($0)
            return $0.count == characterSet.count ? characterSet : nil
        }

        func backtrack(_ start: Int, _ seen: Set<Character>) -> Int {
            var result = 0
            for i in start..<sets.count where seen.intersection(sets[i]).isEmpty {
                result = max(result, sets[i].count + backtrack(i + 1, seen.union(sets[i])))
            }
            return result
        }

        return backtrack(0, [])
    }
}