// fizzBuzz generates the FizzBuzz sequence up to a given number n.
func fizzBuzz(n int) []string {
    // Initialize an empty string slice to store the FizzBuzz sequence.
	var res []string
    // Iterate from 1 to n.
	for i := 1; i <= n; i++ {
        // Use a switch statement to determine whether to append "Fizz", "Buzz", "FizzBuzz", or the number itself.
		switch {
		case i%3 == 0 && i%5 == 0:
			res = append(res, "FizzBuzz")
		case i%3 == 0:
			res = append(res, "Fizz")
		case i%5 == 0:
			res = append(res, "Buzz")
		default:
            // Convert the number to a string and append it.
			val := strconv.Itoa(i)
			res = append(res, val)
		}
	}
	return res
}
