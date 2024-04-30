# @param {Integer} x
# @return {Integer}
def my_sqrt(x)
    # Initialize the minimum and maximum values for binary search
    minimum, maximum = 1, x
    
    # Perform binary search
    while minimum <= maximum
        # Calculate the middle value
        middle = (maximum - minimum) / 2 + minimum

        # Adjust the maximum value if the square of the middle is greater than x
        next maximum = middle - 1 if middle * middle > x
        # Adjust the minimum value if the square of the middle is less than x
        next minimum = middle + 1 if middle * middle < x
        
        # Return the middle value if the square of the middle is equal to x
        return middle
    end
    
    # Return the maximum value if no exact square root is found
    maximum
end
