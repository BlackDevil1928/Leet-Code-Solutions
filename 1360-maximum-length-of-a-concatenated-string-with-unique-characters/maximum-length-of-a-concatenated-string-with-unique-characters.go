func max(a, b int) int {
    if a > b {return a}
    return b
}

func maxLength(arr []string) int {
    summary := make([][2]int, len(arr))
    for i, s := range arr {
        exist, valid, sum := make(map[rune]bool), true, 0
        for _, r := range s {
            valid = valid && !exist[r]
            sum += int(math.Pow(2, float64(r-'a')))
            exist[r] = true
        }
        if !valid {continue}    
        summary[i][0] = sum
        summary[i][1] = len(s)
    }

    var res int
    stack := make([][2]int, len(summary))
    copy(stack, summary)
    for i := 0; i < len(summary); i++ {
        res = max(res, summary[i][1])
        for _, s := range stack {
            if summary[i][0] & s[0] == 0 {
                stack = append(stack, [2]int{summary[i][0] | s[0], summary[i][1] + s[1]})
                res = max(res, summary[i][1] + s[1])
            }
        }
    }

    return res
}