def max_depth(s)
    count = 0
    max = 0
    s.each_char do |c|
        count += 1 if c == '('
        max = [count, max].max
        count -= 1 if c == ')'
    end
    max
end