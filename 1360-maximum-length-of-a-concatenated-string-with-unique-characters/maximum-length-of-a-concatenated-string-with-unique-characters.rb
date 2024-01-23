def max_length(arr)
  char_set = Set.new

  has_duplicate_characters = ->(part) do
    part_chars = part.chars
    # duplicates from the subsequence part we're considering
    return true if (part_chars.tally.values.length != part_chars.length)
    # duplicates from the existing subsequence if we add this part
    !(char_set.to_a.length == (char_set.to_a - part_chars).length)
  end

  backtrack = ->(i) do
    return char_set.length if i == arr.length

    result = 0
    if !has_duplicate_characters.call(arr[i])
      arr[i].chars.each { |char| char_set.add(char) }
      result = backtrack.call(i + 1)
      arr[i].chars.each { |char| char_set.delete(char) }
    end

    return [result, backtrack.call(i + 1)].max
  end

  backtrack.call(0)
end