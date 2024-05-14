func judgeCircle(moves string) bool {
    // Count the number of "U" moves and "D" moves
    upDown := strings.Count(moves, "U")
    // Count the number of "R" moves and "L" moves
    leftRight := strings.Count(moves, "R")
    
    // Return true if the number of "U" moves equals the number of "D" moves
    // and the number of "R" moves equals the number of "L" moves
    return upDown == strings.Count(moves, "D") && leftRight == strings.Count(moves, "L")
}
