def single_number(nums)
  xor = 0
  nums.each { |num| xor = xor ^ num } # XOR all elements in the array
  xor # Return the result, which is the single number
end
