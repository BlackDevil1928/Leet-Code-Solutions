class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        // divisor of a number always exists in pairs
        // let's suppose x divides num, then num / x will also divide num
        
        int sum = 0;
        
        // Iterate up to the square root of num to find divisors
        for(int i = 1; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                // find first divisor
                int first = i;
                
                // find second divisor
                int second = num / first;
                
                // If first divisor is not num itself, add it to the sum
                if(first != num)
                {
                    sum += first;
                }
                
                // If second divisor is different from first and not num itself, add it to the sum
                if(second != first && second != num)
                {
                    sum += second;
                }
            }
        }
        
        // Check if the sum of divisors is equal to the number
        return sum == num;
    }
};
