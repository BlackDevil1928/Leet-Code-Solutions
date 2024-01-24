
def pseudo_palindromic_paths (root)
  @answer = 0
  @counter = Array.new(10,0)
  backtracking(root)
  return @answer
end

def backtracking(node)
  @counter[node.val] += 1
  if node.left.nil? && node.right.nil?
    @answer += 1 if palindromic?
  else
    backtracking(node.left) if node.left
    backtracking(node.right) if node.right
  end
  @counter[node.val] -= 1
end

def palindromic?
  even, odd = 0, 0
  @counter.each do |val|
    next if 0 == val
    if val.even?
      even += 1
    else
      odd += 1
    end
  end
  return odd <= 1
end